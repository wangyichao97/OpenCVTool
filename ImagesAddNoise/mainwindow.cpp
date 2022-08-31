#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

//获取待处理图片地址
void MainWindow::on_inputImages_clicked()
{
    fileNames = QFileDialog::getOpenFileNames(this, tr("Open File"),
                       "C:\\Users\\", tr("*.png *.xpm *.jpg  *.bmp *.jpeg"));
    fileNum = fileNames.count();
}


//检测是否选取了高斯噪声
void MainWindow::on_GaussianNoise_checkBox_stateChanged(int state)
{
    if(state == Qt::Checked)
    {
        GaussianNoise_state = true;
    }
    else
    {
        GaussianNoise_state = false;
    }
}

//检测是否选取了椒盐噪声
void MainWindow::on_SaltPepperNoise_checkBox_stateChanged(int state)
{
    if(state == Qt::Checked)
    {
        SaltPepperNoise_state = true;
    }
    else
    {
        SaltPepperNoise_state = false;
    }
}

//检测是否选取了光斑噪声
void MainWindow::on_FaculaNoise_checkBox_stateChanged(int state)
{
    if(state == Qt::Checked)
    {
        FaculaNoise_state = true;
    }
    else
    {
        FaculaNoise_state = false;
    }

}

//高斯噪声函数
Mat MainWindow::GaussianNoise(Mat inputImage, int index)
{
    int gauss_mean_default, gauss_standard_deviation_default;

    //设置高斯噪声默认值
    gauss_mean_default = 10;
    gauss_standard_deviation_default = 20;

    //检测是否设置了高斯噪声参数
    if(!ui->GussMean->text().isEmpty())
    {
        gauss_mean_default = ui->GussMean->text().toInt();
    }

    if(!ui->GussStandard->text().isEmpty())
    {
        gauss_standard_deviation_default = ui->GussStandard->text().toInt();
    }

    //生成与原图像相同尺寸、数据类型和通道类型的矩阵
    Mat luffy_noise = Mat::zeros(inputImage.rows, inputImage.cols, inputImage.type());
    RNG rng(index);//创建一个RNG类

    rng.fill(luffy_noise, RNG::NORMAL, gauss_mean_default, gauss_standard_deviation_default);//生成三通道的高斯分布随机数

    Mat resultImage;
    resultImage = inputImage + luffy_noise;//在彩色图像中添加高斯噪声

    return resultImage;
}

//椒盐噪声函数
Mat MainWindow::SaltPepperNoise(Mat inputImage, int index)
{
    int gray_value, noise_value;

    //设置噪声默认数量
    noise_value = 5000;

    //检测是否设置了噪声数量
    if(!ui->saltNumber->text().isEmpty())
    {
        noise_value = ui->saltNumber->text().toInt();
    }

    //生成随机数种子
    srand(index);

    //随机生成噪声位置
    for (int k = 0; k < noise_value; k++)
    {
        if(rand() % 1 == 0)
        {
            gray_value = 255;
        }
        else
        {
            gray_value = 0;
        }
        int i = rand() % inputImage.cols;
        int j = rand() % inputImage.rows;

        if (inputImage.channels() == 1)
            inputImage.at<uchar>(j, i) = gray_value;
        else
        {
            inputImage.at<Vec3b>(j, i)[0] = gray_value;
            inputImage.at<Vec3b>(j, i)[1] = gray_value;
            inputImage.at<Vec3b>(j, i)[2] = gray_value;
        }
    }

    return inputImage;
}

//光斑噪声
Mat MainWindow::FaculaNoise(Mat inputImage, int index)
{
    Mat srcEachImage;
    Mat img;

    //生成随机数种子W
    srand(index);

    //转为灰度图
    cvtColor(inputImage, img, COLOR_BGR2GRAY);
    int row = img.rows;   //行数
    int col = img.cols;   //列数
    int noise_radius;     //光斑半径
    int noise_gray;
    float noise_gray_rate;
    int x_o, y_o;
    float noise_site_x, noise_site_y;

    //设置光斑默认值
    noise_radius = 255;
    noise_site_x = 0.5;
    noise_site_y = 0.5;

    //检测光斑是否设置参数
    if(!ui->facularR->text().isEmpty())
    {
        noise_radius = ui->facularR->text().toInt();
    }

    //光斑半径随机化
    noise_radius = noise_radius + (rand() % 100);

    if(!ui->SiteX->text().isEmpty())
    {
        noise_site_x = ui->SiteX->text().toFloat();
    }
    if(!ui->SiteY->text().isEmpty())
    {
        noise_site_y = ui->SiteY->text().toFloat();
    }

    //画出光斑
    Mat noise_img1 = Mat::zeros(noise_radius, noise_radius, CV_8UC1);
    Mat noise_img2 = Mat::zeros(noise_radius, noise_radius, CV_8UC1);
    Mat noise_img3 = Mat::zeros(noise_radius, noise_radius, CV_8UC1);
    Mat noise_img4 = Mat::zeros(noise_radius, noise_radius, CV_8UC1);
    Mat noise_img12 = Mat::zeros(noise_radius, noise_radius, CV_8UC1);
    Mat noise_img34 = Mat::zeros(noise_radius, noise_radius, CV_8UC1);
    Mat noise_img = Mat::zeros(noise_radius, noise_radius, CV_8UC1);

    for (int i = 0; i < noise_img4.rows; i++) //矩阵行数循环
    {
        noise_gray_rate = (float)i / noise_img4.rows;
        noise_gray = 255 * (1.0 - noise_gray_rate);
        noise_img4(cv::Range(i, i + 1), cv::Range::all()) = noise_gray;

        noise_img4(cv::Range::all(), cv::Range(i, i + 1)) = noise_gray;
    }
    cv::flip(noise_img4, noise_img2, 0);
    cv::flip(noise_img2, noise_img1, 1);
    cv::flip(noise_img1, noise_img3, 0);

    hconcat(noise_img1, noise_img2, noise_img12);
    hconcat(noise_img3, noise_img4, noise_img34);
    vconcat(noise_img12, noise_img34, noise_img);
    int noise_img_row = noise_img.rows;

    //设置光斑左上角原点位置
    x_o = (noise_site_x * (float )col);
    y_o = (noise_site_y * (float )row);

    if(x_o > row- noise_img_row)
    {
        x_o = row- noise_img_row;
    }
    if(x_o < 1)
    {
        x_o = 1;
    }
    if(y_o > row- noise_img_row)
    {
        y_o = row- noise_img_row;
    }
    if(y_o < 1)
    {
        y_o = 1;
    }
    int x_2, y_2;
    x_o--;
    y_o--;
    x_2 = col - (x_o + noise_img_row);
    y_2 = row - (y_o + noise_img_row);

    Mat noise_mask_1 = Mat::zeros(y_o, col, CV_8UC1);
    Mat noise_mask_2 = Mat::zeros(noise_img_row, x_o, CV_8UC1);
    Mat noise_mask_3 = Mat::zeros(noise_img_row, x_2, CV_8UC1);
    Mat noise_mask_4 = Mat::zeros(y_2, col, CV_8UC1);

    Mat noise_mask_a = Mat::zeros(noise_img_row, x_o + noise_img_row, CV_8UC1);
    Mat noise_mask_b = Mat::zeros(noise_img_row, col, CV_8UC1);
    Mat noise_mask_c = Mat::zeros(y_o + noise_img_row, col, CV_8UC1);
    Mat noise_mask_d = Mat::zeros(row, col, CV_8UC1);

    hconcat(noise_mask_2, noise_img, noise_mask_a);
    hconcat(noise_mask_a, noise_mask_3, noise_mask_b);
    vconcat(noise_mask_1, noise_mask_b, noise_mask_c);
    vconcat(noise_mask_c, noise_mask_4, noise_mask_d);

    cv::add(img, noise_mask_d, inputImage);

    return inputImage;
}

//析构函数
MainWindow::~MainWindow()
{
    delete ui;
}

//保存函数
void MainWindow::on_outputImage_clicked()
{
    //获得存储地址
    QString filePath = QFileDialog::getExistingDirectory(this, tr("select path"), "C:\\Users\\", QFileDialog::ShowDirsOnly);
    QString resultPath = filePath.append("/");

    Mat dstImage;
    int output_Image_num;

    //默认保存数量为1张
    output_Image_num = 1;

    //设置保存数量
    if(!ui->outputImageNum->text().isEmpty())
    {
        output_Image_num = ui->outputImageNum->text().toInt();
    }

    //对选中的图像依次保存
    for (int i = 0;i < fileNum; i++)
    {

        QFileInfo fi(fileNames[i]);
        QString imageName = fi.fileName();

        for(int j = 0; j < output_Image_num; j++)
        {
            //生成照片保存地址和名称
            QString outputPath = resultPath;
            QString name_num = QString::number(j);
            name_num.append(imageName);
            outputPath.append(name_num);
            QByteArray ba;
            ba.append(fileNames[i]);
            Mat srcEachImage = imread(ba.data());
            Mat srcImage = srcEachImage.clone();

            //为照片添加噪声
            if(GaussianNoise_state)
            {
                srcImage = GaussianNoise(srcImage,(i+1)*j*10);
            }
            if(SaltPepperNoise_state)
            {
                srcImage = SaltPepperNoise(srcImage,(i+1)*j*10);
            }
            if(FaculaNoise_state)
            {
                srcImage = FaculaNoise(srcImage,(i+1)*j*10);
            }

            //MAT照片转换为Qimage
            QImage qresultImage = MatToQImage(srcImage);
            qresultImage.save(outputPath);
        }
    }
}

//MAT照片转换为Qimage
QImage MainWindow::MatToQImage(Mat & mat)
{
    cvtColor(mat, mat, COLOR_BGR2RGB);
    QImage qImage((const unsigned char*)mat.data, mat.cols, mat.rows, mat.step,
        QImage::Format_RGB888);
    return qImage;
}

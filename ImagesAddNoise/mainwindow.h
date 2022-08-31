#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QImage>
#include <QPixmap>
#include <QFileDialog>
#include <opencv2/opencv.hpp>
#include <QDebug>
#include <QMessageBox>
#include <QBuffer>

using namespace cv;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    QImage MatToImage(Mat &matImage);
    QImage MatToQImage(Mat & mat);
    bool saveFile(const QString &filename, QImage qresultimage);
    ~MainWindow();

private slots:


    Mat GaussianNoise(Mat inputImage, int index);

    Mat SaltPepperNoise(Mat inputImage, int index);

    Mat FaculaNoise(Mat inputImage, int index);

    void on_GaussianNoise_checkBox_stateChanged(int state);

    void on_SaltPepperNoise_checkBox_stateChanged(int state);

    void on_FaculaNoise_checkBox_stateChanged(int state);

    void on_inputImages_clicked();

    void on_outputImage_clicked();

private:
    Ui::MainWindow *ui;
    QStringList fileNames;
    int fileNum;
    bool GaussianNoise_state = false;
    bool SaltPepperNoise_state = false;
    bool FaculaNoise_state = false;
};
#endif // MAINWINDOW_H

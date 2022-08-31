/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *OpenAction;
    QAction *actionaddimages;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *inputImages;
    QWidget *widget_14;
    QHBoxLayout *horizontalLayout_9;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *GussMean;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *GussSD;
    QLineEdit *GussStandard;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *SaltNum;
    QLineEdit *saltNumber;
    QWidget *widget_15;
    QHBoxLayout *horizontalLayout_10;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *SY;
    QLineEdit *SiteY;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *SX;
    QLineEdit *SiteX;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *FR;
    QLineEdit *facularR;
    QWidget *widget_13;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QWidget *widget_12;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *GaussianNoise_checkBox;
    QCheckBox *SaltPepperNoise_checkBox;
    QCheckBox *FaculaNoise_checkBox;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QLineEdit *outputImageNum;
    QWidget *widget_16;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *outputImage;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(736, 557);
        QFont font;
        font.setPointSize(14);
        MainWindow->setFont(font);
        OpenAction = new QAction(MainWindow);
        OpenAction->setObjectName(QString::fromUtf8("OpenAction"));
        actionaddimages = new QAction(MainWindow);
        actionaddimages->setObjectName(QString::fromUtf8("actionaddimages"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_6 = new QVBoxLayout(centralwidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        widget_10 = new QWidget(centralwidget);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        horizontalLayout_7 = new QHBoxLayout(widget_10);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        inputImages = new QPushButton(widget_10);
        inputImages->setObjectName(QString::fromUtf8("inputImages"));
        inputImages->setIconSize(QSize(19, 19));

        horizontalLayout_7->addWidget(inputImages);


        verticalLayout_6->addWidget(widget_10);

        widget_14 = new QWidget(centralwidget);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));
        horizontalLayout_9 = new QHBoxLayout(widget_14);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        widget_3 = new QWidget(widget_14);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setFont(font);
        widget_3->setStyleSheet(QString::fromUtf8("gridline-color: rgb(0, 0, 0);"));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        widget = new QWidget(widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setFont(font);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        GussMean = new QLineEdit(widget);
        GussMean->setObjectName(QString::fromUtf8("GussMean"));

        horizontalLayout->addWidget(GussMean);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        GussSD = new QLabel(widget_2);
        GussSD->setObjectName(QString::fromUtf8("GussSD"));
        GussSD->setFont(font);

        horizontalLayout_2->addWidget(GussSD);

        GussStandard = new QLineEdit(widget_2);
        GussStandard->setObjectName(QString::fromUtf8("GussStandard"));

        horizontalLayout_2->addWidget(GussStandard);


        verticalLayout->addWidget(widget_2);


        horizontalLayout_9->addWidget(widget_3);

        widget_9 = new QWidget(widget_14);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        verticalLayout_3 = new QVBoxLayout(widget_9);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_4 = new QLabel(widget_9);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_4);

        widget_4 = new QWidget(widget_9);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        SaltNum = new QLabel(widget_4);
        SaltNum->setObjectName(QString::fromUtf8("SaltNum"));
        SaltNum->setFont(font);

        horizontalLayout_3->addWidget(SaltNum);

        saltNumber = new QLineEdit(widget_4);
        saltNumber->setObjectName(QString::fromUtf8("saltNumber"));

        horizontalLayout_3->addWidget(saltNumber);


        verticalLayout_3->addWidget(widget_4);


        horizontalLayout_9->addWidget(widget_9);


        verticalLayout_6->addWidget(widget_14);

        widget_15 = new QWidget(centralwidget);
        widget_15->setObjectName(QString::fromUtf8("widget_15"));
        horizontalLayout_10 = new QHBoxLayout(widget_15);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        widget_8 = new QWidget(widget_15);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        verticalLayout_2 = new QVBoxLayout(widget_8);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_5 = new QLabel(widget_8);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_5);

        widget_7 = new QWidget(widget_8);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_6 = new QHBoxLayout(widget_7);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        SY = new QLabel(widget_7);
        SY->setObjectName(QString::fromUtf8("SY"));

        horizontalLayout_6->addWidget(SY);

        SiteY = new QLineEdit(widget_7);
        SiteY->setObjectName(QString::fromUtf8("SiteY"));

        horizontalLayout_6->addWidget(SiteY);


        verticalLayout_2->addWidget(widget_7);

        widget_6 = new QWidget(widget_8);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_5 = new QHBoxLayout(widget_6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        SX = new QLabel(widget_6);
        SX->setObjectName(QString::fromUtf8("SX"));

        horizontalLayout_5->addWidget(SX);

        SiteX = new QLineEdit(widget_6);
        SiteX->setObjectName(QString::fromUtf8("SiteX"));

        horizontalLayout_5->addWidget(SiteX);


        verticalLayout_2->addWidget(widget_6);

        widget_5 = new QWidget(widget_8);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        FR = new QLabel(widget_5);
        FR->setObjectName(QString::fromUtf8("FR"));

        horizontalLayout_4->addWidget(FR);

        facularR = new QLineEdit(widget_5);
        facularR->setObjectName(QString::fromUtf8("facularR"));

        horizontalLayout_4->addWidget(facularR);


        verticalLayout_2->addWidget(widget_5);


        horizontalLayout_10->addWidget(widget_8);

        widget_13 = new QWidget(widget_15);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        verticalLayout_5 = new QVBoxLayout(widget_13);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_6 = new QLabel(widget_13);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_6);

        widget_12 = new QWidget(widget_13);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        verticalLayout_4 = new QVBoxLayout(widget_12);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        GaussianNoise_checkBox = new QCheckBox(widget_12);
        GaussianNoise_checkBox->setObjectName(QString::fromUtf8("GaussianNoise_checkBox"));

        verticalLayout_4->addWidget(GaussianNoise_checkBox);

        SaltPepperNoise_checkBox = new QCheckBox(widget_12);
        SaltPepperNoise_checkBox->setObjectName(QString::fromUtf8("SaltPepperNoise_checkBox"));

        verticalLayout_4->addWidget(SaltPepperNoise_checkBox);

        FaculaNoise_checkBox = new QCheckBox(widget_12);
        FaculaNoise_checkBox->setObjectName(QString::fromUtf8("FaculaNoise_checkBox"));

        verticalLayout_4->addWidget(FaculaNoise_checkBox);


        verticalLayout_5->addWidget(widget_12);

        widget_11 = new QWidget(widget_13);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        horizontalLayout_8 = new QHBoxLayout(widget_11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_2 = new QLabel(widget_11);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFrameShape(QFrame::NoFrame);

        horizontalLayout_8->addWidget(label_2);

        outputImageNum = new QLineEdit(widget_11);
        outputImageNum->setObjectName(QString::fromUtf8("outputImageNum"));

        horizontalLayout_8->addWidget(outputImageNum);


        verticalLayout_5->addWidget(widget_11);


        horizontalLayout_10->addWidget(widget_13);


        verticalLayout_6->addWidget(widget_15);

        widget_16 = new QWidget(centralwidget);
        widget_16->setObjectName(QString::fromUtf8("widget_16"));
        horizontalLayout_11 = new QHBoxLayout(widget_16);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        outputImage = new QPushButton(widget_16);
        outputImage->setObjectName(QString::fromUtf8("outputImage"));

        horizontalLayout_11->addWidget(outputImage);


        verticalLayout_6->addWidget(widget_16);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        OpenAction->setText(QCoreApplication::translate("MainWindow", "\345\212\240\350\275\275\345\233\276\347\211\207", nullptr));
        actionaddimages->setText(QCoreApplication::translate("MainWindow", "addimages", nullptr));
        inputImages->setText(QCoreApplication::translate("MainWindow", "Input images", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "GaussianNoise", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Mean:", nullptr));
        GussMean->setText(QString());
        GussSD->setText(QCoreApplication::translate("MainWindow", "S  D:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "SaltPepperNoise", nullptr));
        SaltNum->setText(QCoreApplication::translate("MainWindow", "Salt Number:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "FaculaNoise", nullptr));
        SY->setText(QCoreApplication::translate("MainWindow", "Y position:", nullptr));
        SX->setText(QCoreApplication::translate("MainWindow", "X position:", nullptr));
        FR->setText(QCoreApplication::translate("MainWindow", "Facular  Rauise", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Output Option", nullptr));
        GaussianNoise_checkBox->setText(QCoreApplication::translate("MainWindow", "GaussianNoise", nullptr));
        SaltPepperNoise_checkBox->setText(QCoreApplication::translate("MainWindow", "SaltPepperNoise", nullptr));
        FaculaNoise_checkBox->setText(QCoreApplication::translate("MainWindow", "FaculaNoise", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Image Number", nullptr));
        outputImage->setText(QCoreApplication::translate("MainWindow", "Output images", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

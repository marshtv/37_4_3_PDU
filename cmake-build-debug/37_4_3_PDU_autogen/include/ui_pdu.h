/********************************************************************************
** Form generated from reading UI file 'pdu.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PDU_H
#define UI_PDU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *gridFrame;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_1;
    QPushButton *pushButton_8;
    QPushButton *pushButton_3;
    QPushButton *pushButton_9;
    QPushButton *pushButton_7;
    QPushButton *pushButton_0;
    QFrame *gridFrame_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_11;
    QPushButton *pushButton;
    QPushButton *pushButton_10;
    QPushButton *pushButton_12;
    QFrame *frame;
    QFrame *verticalFrame_2;
    QVBoxLayout *verticalLayout_2;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *lcdNumber_1;
    QFrame *frame_2;
    QLCDNumber *lcdNumber_2;
    QFrame *horizontalFrame_2;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_3;
    QLabel *label;
    QFrame *frame_4;
    QFrame *frame_5;
    QLabel *label_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(240, 680);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(240, 680));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setEnabled(true);
        centralwidget->setAutoFillBackground(false);
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        gridFrame = new QFrame(centralwidget);
        gridFrame->setObjectName("gridFrame");
        gridFrame->setGeometry(QRect(-1, -1, 241, 231));
        gridFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(216, 216, 216);"));
        gridLayout = new QGridLayout(gridFrame);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(3);
        gridLayout->setVerticalSpacing(4);
        pushButton_2 = new QPushButton(gridFrame);
        pushButton_2->setObjectName("pushButton_2");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setSizeIncrement(QSize(0, 0));
        QFont font;
        font.setPointSize(16);
        font.setBold(false);
        pushButton_2->setFont(font);

        gridLayout->addWidget(pushButton_2, 4, 1, 1, 1);

        pushButton_6 = new QPushButton(gridFrame);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setSizeIncrement(QSize(0, 0));
        pushButton_6->setFont(font);

        gridLayout->addWidget(pushButton_6, 5, 2, 1, 1);

        pushButton_4 = new QPushButton(gridFrame);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setSizeIncrement(QSize(0, 0));
        pushButton_4->setFont(font);

        gridLayout->addWidget(pushButton_4, 5, 0, 1, 1);

        pushButton_5 = new QPushButton(gridFrame);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setSizeIncrement(QSize(0, 0));
        pushButton_5->setFont(font);

        gridLayout->addWidget(pushButton_5, 5, 1, 1, 1);

        pushButton_1 = new QPushButton(gridFrame);
        pushButton_1->setObjectName("pushButton_1");
        sizePolicy1.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy1);
        pushButton_1->setSizeIncrement(QSize(0, 0));
        pushButton_1->setFont(font);

        gridLayout->addWidget(pushButton_1, 4, 0, 1, 1);

        pushButton_8 = new QPushButton(gridFrame);
        pushButton_8->setObjectName("pushButton_8");
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setSizeIncrement(QSize(0, 0));
        pushButton_8->setFont(font);

        gridLayout->addWidget(pushButton_8, 6, 1, 1, 1);

        pushButton_3 = new QPushButton(gridFrame);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setSizeIncrement(QSize(0, 0));
        pushButton_3->setFont(font);

        gridLayout->addWidget(pushButton_3, 4, 2, 1, 1);

        pushButton_9 = new QPushButton(gridFrame);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setSizeIncrement(QSize(0, 0));
        pushButton_9->setFont(font);

        gridLayout->addWidget(pushButton_9, 6, 2, 1, 1);

        pushButton_7 = new QPushButton(gridFrame);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setSizeIncrement(QSize(0, 0));
        pushButton_7->setFont(font);

        gridLayout->addWidget(pushButton_7, 6, 0, 1, 1);

        pushButton_0 = new QPushButton(gridFrame);
        pushButton_0->setObjectName("pushButton_0");
        sizePolicy1.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy1);
        pushButton_0->setSizeIncrement(QSize(0, 0));
        pushButton_0->setFont(font);
        pushButton_0->setAutoDefault(false);
        pushButton_0->setFlat(false);

        gridLayout->addWidget(pushButton_0, 7, 1, 1, 1);

        gridFrame_2 = new QFrame(centralwidget);
        gridFrame_2->setObjectName("gridFrame_2");
        gridFrame_2->setGeometry(QRect(-1, 229, 241, 121));
        gridFrame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(216, 216, 216);"));
        gridLayout_2 = new QGridLayout(gridFrame_2);
        gridLayout_2->setSpacing(2);
        gridLayout_2->setObjectName("gridLayout_2");
        pushButton_11 = new QPushButton(gridFrame_2);
        pushButton_11->setObjectName("pushButton_11");
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        pushButton_11->setFont(font1);
        pushButton_11->setAutoFillBackground(false);
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 115, 8);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(pushButton_11, 0, 2, 1, 1);

        pushButton = new QPushButton(gridFrame_2);
        pushButton->setObjectName("pushButton");
        pushButton->setFont(font1);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 115, 8);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_10 = new QPushButton(gridFrame_2);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setFont(font1);
        pushButton_10->setAutoFillBackground(false);
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 115, 8);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(pushButton_10, 1, 0, 1, 1);

        pushButton_12 = new QPushButton(gridFrame_2);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setFont(font1);
        pushButton_12->setAutoFillBackground(false);
        pushButton_12->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 115, 8);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(pushButton_12, 1, 2, 1, 1);

        frame = new QFrame(gridFrame_2);
        frame->setObjectName("frame");
        frame->setAutoFillBackground(false);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(0);

        gridLayout_2->addWidget(frame, 0, 1, 2, 1);

        verticalFrame_2 = new QFrame(centralwidget);
        verticalFrame_2->setObjectName("verticalFrame_2");
        verticalFrame_2->setGeometry(QRect(0, 450, 241, 211));
        verticalFrame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(216, 216, 216);"));
        verticalLayout_2 = new QVBoxLayout(verticalFrame_2);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalFrame = new QFrame(centralwidget);
        horizontalFrame->setObjectName("horizontalFrame");
        horizontalFrame->setGeometry(QRect(0, 350, 241, 61));
        horizontalFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(216, 216, 216);"));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setObjectName("horizontalLayout");
        lcdNumber_1 = new QLCDNumber(horizontalFrame);
        lcdNumber_1->setObjectName("lcdNumber_1");
        lcdNumber_1->setAutoFillBackground(false);
        lcdNumber_1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lcdNumber_1->setFrameShape(QFrame::StyledPanel);
        lcdNumber_1->setFrameShadow(QFrame::Sunken);
        lcdNumber_1->setLineWidth(0);
        lcdNumber_1->setMidLineWidth(0);
        lcdNumber_1->setSmallDecimalPoint(false);
        lcdNumber_1->setDigitCount(2);
        lcdNumber_1->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_1->setProperty("intValue", QVariant(0));

        horizontalLayout->addWidget(lcdNumber_1);

        frame_2 = new QFrame(horizontalFrame);
        frame_2->setObjectName("frame_2");
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(216, 216, 216);"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(0);

        horizontalLayout->addWidget(frame_2);

        lcdNumber_2 = new QLCDNumber(horizontalFrame);
        lcdNumber_2->setObjectName("lcdNumber_2");
        lcdNumber_2->setEnabled(true);
        QFont font2;
        font2.setPointSize(9);
        lcdNumber_2->setFont(font2);
        lcdNumber_2->setAutoFillBackground(false);
        lcdNumber_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lcdNumber_2->setFrameShape(QFrame::StyledPanel);
        lcdNumber_2->setFrameShadow(QFrame::Sunken);
        lcdNumber_2->setLineWidth(0);
        lcdNumber_2->setMidLineWidth(0);
        lcdNumber_2->setSmallDecimalPoint(false);
        lcdNumber_2->setDigitCount(2);
        lcdNumber_2->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_2->setProperty("intValue", QVariant(0));

        horizontalLayout->addWidget(lcdNumber_2);

        horizontalFrame_2 = new QFrame(centralwidget);
        horizontalFrame_2->setObjectName("horizontalFrame_2");
        horizontalFrame_2->setGeometry(QRect(0, 410, 241, 41));
        horizontalFrame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(216, 216, 216);"));
        horizontalLayout_2 = new QHBoxLayout(horizontalFrame_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        frame_3 = new QFrame(horizontalFrame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setAutoFillBackground(false);
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Plain);
        label = new QLabel(frame_3);
        label->setObjectName("label");
        label->setGeometry(QRect(10, -10, 61, 31));
        QFont font3;
        font3.setPointSize(16);
        label->setFont(font3);
        label->setFrameShadow(QFrame::Raised);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(frame_3);

        frame_4 = new QFrame(horizontalFrame_2);
        frame_4->setObjectName("frame_4");
        frame_4->setAutoFillBackground(false);
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(216, 216, 216);"));
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Plain);
        frame_4->setLineWidth(0);

        horizontalLayout_2->addWidget(frame_4);

        frame_5 = new QFrame(horizontalFrame_2);
        frame_5->setObjectName("frame_5");
        frame_5->setAutoFillBackground(false);
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Plain);
        label_2 = new QLabel(frame_5);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, -10, 61, 31));
        label_2->setFont(font3);
        label_2->setAutoFillBackground(false);
        label_2->setFrameShadow(QFrame::Raised);
        label_2->setTextFormat(Qt::AutoText);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(frame_5);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_1, SIGNAL(clicked()), MainWindow, SLOT(add_1()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(add_2()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindow, SLOT(add_3()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), MainWindow, SLOT(add_4()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), MainWindow, SLOT(add_5()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), MainWindow, SLOT(add_6()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), MainWindow, SLOT(add_7()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), MainWindow, SLOT(add_8()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), MainWindow, SLOT(add_9()));
        QObject::connect(pushButton_0, SIGNAL(clicked()), MainWindow, SLOT(add_0()));
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(ch_up()));
        QObject::connect(pushButton_10, SIGNAL(clicked()), MainWindow, SLOT(ch_down()));
        QObject::connect(pushButton_11, SIGNAL(clicked()), MainWindow, SLOT(vol_up()));
        QObject::connect(pushButton_12, SIGNAL(clicked()), MainWindow, SLOT(vol_down()));

        pushButton_0->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\237\321\203\320\273\321\214\321\202 \320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \320\242\320\222", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "VOL +", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "CH +", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "CH -", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "VOL -", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "CH", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "VOL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PDU_H

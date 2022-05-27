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
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *StartButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *BoardButton;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *AboutUsButton;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *ExitButton;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 677);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(1500, 1500));
        MainWindow->setMouseTracking(true);
        MainWindow->setAcceptDrops(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget\n"
"{\n"
"background-image: url(:/images/Icons/iPhone wallpaper.jpg);\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	background-color:  rgb(255, 238, 200);\n"
"	border-Radius: 7px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color: red;\n"
"border-color: red;\n"
"border-width: 2px;\n"
"}\n"
"\n"
"\n"
""));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 5, -1, -1);

        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(90, 30));
        label->setStyleSheet(QString::fromUtf8("font: 25pt \"NPIRamin\";\n"
"background-color: rgb(255, 255, 255);\n"
"border-Radius: 7px;"));

        horizontalLayout_6->addWidget(label);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(30, 30));
        pushButton->setMaximumSize(QSize(0, 16777215));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"image: url(:/icon/Icons/icons8-close-30.png);\n"
""));

        horizontalLayout_6->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_2 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_2 = new QSpacerItem(30, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        StartButton = new QPushButton(centralwidget);
        StartButton->setObjectName(QString::fromUtf8("StartButton"));
        sizePolicy1.setHeightForWidth(StartButton->sizePolicy().hasHeightForWidth());
        StartButton->setSizePolicy(sizePolicy1);
        StartButton->setMinimumSize(QSize(200, 30));
        StartButton->setStyleSheet(QString::fromUtf8("font: 15pt \"NPIRamin\";\n"
"\n"
""));

        horizontalLayout_2->addWidget(StartButton);

        horizontalSpacer_3 = new QSpacerItem(25, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        BoardButton = new QPushButton(centralwidget);
        BoardButton->setObjectName(QString::fromUtf8("BoardButton"));
        sizePolicy1.setHeightForWidth(BoardButton->sizePolicy().hasHeightForWidth());
        BoardButton->setSizePolicy(sizePolicy1);
        BoardButton->setMinimumSize(QSize(200, 30));
        BoardButton->setStyleSheet(QString::fromUtf8("font: 15pt \"NPIRamin\";"));

        horizontalLayout_3->addWidget(BoardButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_4->addLayout(horizontalLayout_3);

        verticalSpacer_5 = new QSpacerItem(40, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        AboutUsButton = new QPushButton(centralwidget);
        AboutUsButton->setObjectName(QString::fromUtf8("AboutUsButton"));
        sizePolicy1.setHeightForWidth(AboutUsButton->sizePolicy().hasHeightForWidth());
        AboutUsButton->setSizePolicy(sizePolicy1);
        AboutUsButton->setMinimumSize(QSize(200, 30));
        AboutUsButton->setStyleSheet(QString::fromUtf8("font: 15pt \"NPIRamin\";"));

        horizontalLayout_5->addWidget(AboutUsButton);


        verticalLayout_4->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(40, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        ExitButton = new QPushButton(centralwidget);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));
        ExitButton->setMinimumSize(QSize(200, 30));
        ExitButton->setStyleSheet(QString::fromUtf8("font: 15pt \"NPIRamin\";\n"
"\n"
"\n"
""));

        horizontalLayout_4->addWidget(ExitButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        verticalLayout_4->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 200, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "   WELLCOME TO SUDOKU GAME     ", nullptr));
        pushButton->setText(QString());
        StartButton->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        BoardButton->setText(QCoreApplication::translate("MainWindow", "LeaderBoards", nullptr));
        AboutUsButton->setText(QCoreApplication::translate("MainWindow", "About Us", nullptr));
        ExitButton->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

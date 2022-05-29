/********************************************************************************
** Form generated from reading UI file 'boardwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOARDWINDOW_H
#define UI_BOARDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BoardWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *PlayerName;
    QSpacerItem *horizontalSpacer_3;
    QLabel *PlayerScore;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_4;
    QLineEdit *p1n;
    QLineEdit *p1s;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit_8;
    QLineEdit *p2n;
    QLineEdit *p2s;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEdit_9;
    QLineEdit *p3n;
    QLineEdit *p3s;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEdit_13;
    QLineEdit *p4n;
    QLineEdit *p4s;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *lineEdit_15;
    QLineEdit *p5n;
    QLineEdit *p5s;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *Back;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QMainWindow *BoardWindow)
    {
        if (BoardWindow->objectName().isEmpty())
            BoardWindow->setObjectName(QString::fromUtf8("BoardWindow"));
        BoardWindow->resize(670, 470);
        centralwidget = new QWidget(BoardWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget\n"
"{\n"
"	background-image: url(:/Icons/3.jpg);\n"
"}\n"
"QLabel\n"
"{\n"
"	background-color: rgb(121, 121, 121);\n"
"	font: 25pt \"Permanent Marker\";\n"
"	color: rgb(255, 253, 224);\n"
"	border-Radius: 7px;\n"
"}\n"
"\n"
"\n"
"QPushButton\n"
"{\n"
"	font: 15pt \"NPIRamin\";\n"
"	background-color:  rgb(255, 238, 200);\n"
"	border-Radius: 7px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color: red;\n"
"border-color: red;\n"
"border-width: 2px;\n"
"}\n"
"QLineEdit\n"
"{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255);\n"
"	font: 75 12pt \"Segoe Print\";\n"
"	qproperty-alignment: AlignHCenter;\n"
"}\n"
"\n"
""));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 6, 671, 461));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 10, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 40));
        label->setMaximumSize(QSize(16777215, 40));

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        PlayerName = new QLabel(verticalLayoutWidget);
        PlayerName->setObjectName(QString::fromUtf8("PlayerName"));
        PlayerName->setEnabled(false);
        PlayerName->setMinimumSize(QSize(100, 0));
        PlayerName->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 18pt \"Permanent Marker\";"));
        PlayerName->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(PlayerName);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        PlayerScore = new QLabel(verticalLayoutWidget);
        PlayerScore->setObjectName(QString::fromUtf8("PlayerScore"));
        PlayerScore->setEnabled(false);
        PlayerScore->setMinimumSize(QSize(80, 0));
        PlayerScore->setAutoFillBackground(false);
        PlayerScore->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 18pt \"Permanent Marker\";"));
        PlayerScore->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(PlayerScore);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setEnabled(false);

        verticalLayout->addWidget(label_4);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEdit_4 = new QLineEdit(verticalLayoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy1);
        lineEdit_4->setMaximumSize(QSize(25, 30));
        lineEdit_4->setStyleSheet(QString::fromUtf8(""));
        lineEdit_4->setAlignment(Qt::AlignHCenter);

        horizontalLayout_3->addWidget(lineEdit_4);

        p1n = new QLineEdit(verticalLayoutWidget);
        p1n->setObjectName(QString::fromUtf8("p1n"));
        p1n->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(p1n->sizePolicy().hasHeightForWidth());
        p1n->setSizePolicy(sizePolicy2);
        p1n->setMinimumSize(QSize(0, 30));
        p1n->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_3->addWidget(p1n);

        p1s = new QLineEdit(verticalLayoutWidget);
        p1s->setObjectName(QString::fromUtf8("p1s"));
        p1s->setEnabled(false);
        p1s->setMinimumSize(QSize(0, 30));

        horizontalLayout_3->addWidget(p1s);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 10, -1, -1);
        lineEdit_8 = new QLineEdit(verticalLayoutWidget);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        sizePolicy1.setHeightForWidth(lineEdit_8->sizePolicy().hasHeightForWidth());
        lineEdit_8->setSizePolicy(sizePolicy1);
        lineEdit_8->setMaximumSize(QSize(25, 30));

        horizontalLayout_5->addWidget(lineEdit_8);

        p2n = new QLineEdit(verticalLayoutWidget);
        p2n->setObjectName(QString::fromUtf8("p2n"));
        p2n->setEnabled(false);
        p2n->setMinimumSize(QSize(0, 30));

        horizontalLayout_5->addWidget(p2n);

        p2s = new QLineEdit(verticalLayoutWidget);
        p2s->setObjectName(QString::fromUtf8("p2s"));
        p2s->setEnabled(false);
        p2s->setMinimumSize(QSize(0, 30));

        horizontalLayout_5->addWidget(p2s);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 10, -1, -1);
        lineEdit_9 = new QLineEdit(verticalLayoutWidget);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        sizePolicy1.setHeightForWidth(lineEdit_9->sizePolicy().hasHeightForWidth());
        lineEdit_9->setSizePolicy(sizePolicy1);
        lineEdit_9->setMaximumSize(QSize(25, 30));

        horizontalLayout_6->addWidget(lineEdit_9);

        p3n = new QLineEdit(verticalLayoutWidget);
        p3n->setObjectName(QString::fromUtf8("p3n"));
        p3n->setEnabled(false);
        p3n->setMinimumSize(QSize(0, 30));

        horizontalLayout_6->addWidget(p3n);

        p3s = new QLineEdit(verticalLayoutWidget);
        p3s->setObjectName(QString::fromUtf8("p3s"));
        p3s->setEnabled(false);
        p3s->setMinimumSize(QSize(0, 30));

        horizontalLayout_6->addWidget(p3s);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 10, -1, -1);
        lineEdit_13 = new QLineEdit(verticalLayoutWidget);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        sizePolicy1.setHeightForWidth(lineEdit_13->sizePolicy().hasHeightForWidth());
        lineEdit_13->setSizePolicy(sizePolicy1);
        lineEdit_13->setMaximumSize(QSize(25, 30));

        horizontalLayout_7->addWidget(lineEdit_13);

        p4n = new QLineEdit(verticalLayoutWidget);
        p4n->setObjectName(QString::fromUtf8("p4n"));
        p4n->setEnabled(false);
        p4n->setMinimumSize(QSize(0, 30));

        horizontalLayout_7->addWidget(p4n);

        p4s = new QLineEdit(verticalLayoutWidget);
        p4s->setObjectName(QString::fromUtf8("p4s"));
        p4s->setEnabled(false);
        p4s->setMinimumSize(QSize(0, 30));

        horizontalLayout_7->addWidget(p4s);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 10, -1, -1);
        lineEdit_15 = new QLineEdit(verticalLayoutWidget);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        sizePolicy1.setHeightForWidth(lineEdit_15->sizePolicy().hasHeightForWidth());
        lineEdit_15->setSizePolicy(sizePolicy1);
        lineEdit_15->setMaximumSize(QSize(25, 30));

        horizontalLayout_8->addWidget(lineEdit_15);

        p5n = new QLineEdit(verticalLayoutWidget);
        p5n->setObjectName(QString::fromUtf8("p5n"));
        p5n->setEnabled(false);
        p5n->setMinimumSize(QSize(0, 30));

        horizontalLayout_8->addWidget(p5n);

        p5s = new QLineEdit(verticalLayoutWidget);
        p5s->setObjectName(QString::fromUtf8("p5s"));
        p5s->setEnabled(false);
        p5s->setMinimumSize(QSize(0, 30));

        horizontalLayout_8->addWidget(p5s);


        verticalLayout->addLayout(horizontalLayout_8);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        Back = new QPushButton(verticalLayoutWidget);
        Back->setObjectName(QString::fromUtf8("Back"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Back->sizePolicy().hasHeightForWidth());
        Back->setSizePolicy(sizePolicy3);
        Back->setMinimumSize(QSize(150, 0));
        Back->setLayoutDirection(Qt::LeftToRight);
        Back->setStyleSheet(QString::fromUtf8("background-color: rgb(173, 173, 173);\n"
""));

        horizontalLayout_4->addWidget(Back);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        BoardWindow->setCentralWidget(centralwidget);

        retranslateUi(BoardWindow);

        QMetaObject::connectSlotsByName(BoardWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BoardWindow)
    {
        BoardWindow->setWindowTitle(QCoreApplication::translate("BoardWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("BoardWindow", "YOUR SCORE:", nullptr));
        PlayerName->setText(QString());
        PlayerScore->setText(QString());
        label_4->setText(QCoreApplication::translate("BoardWindow", "TOP PLAYERS:", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("BoardWindow", "1", nullptr));
        lineEdit_8->setText(QCoreApplication::translate("BoardWindow", "2", nullptr));
        lineEdit_9->setText(QCoreApplication::translate("BoardWindow", "3", nullptr));
        lineEdit_13->setText(QCoreApplication::translate("BoardWindow", "4", nullptr));
        lineEdit_15->setText(QCoreApplication::translate("BoardWindow", "5", nullptr));
        Back->setText(QCoreApplication::translate("BoardWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BoardWindow: public Ui_BoardWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARDWINDOW_H

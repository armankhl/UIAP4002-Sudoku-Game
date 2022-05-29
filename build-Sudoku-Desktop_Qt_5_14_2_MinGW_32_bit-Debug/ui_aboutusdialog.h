/********************************************************************************
** Form generated from reading UI file 'aboutusdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTUSDIALOG_H
#define UI_ABOUTUSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutUsDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;

    void setupUi(QDialog *AboutUsDialog)
    {
        if (AboutUsDialog->objectName().isEmpty())
            AboutUsDialog->setObjectName(QString::fromUtf8("AboutUsDialog"));
        AboutUsDialog->resize(413, 155);
        AboutUsDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(68, 68, 68);\n"
""));
        verticalLayoutWidget = new QWidget(AboutUsDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 430, 151));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 15pt \"NPISetareh\";\n"
"background-color:  rgb(255, 234, 0)"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(230, 10));
        lineEdit->setMaximumSize(QSize(0, 30));
        lineEdit->setBaseSize(QSize(0, 0));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"MV Boli\";\n"
"background-color: rgb(166, 166, 166);\n"
"color: black;"));
        lineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setStyleSheet(QString::fromUtf8("font: 15pt \"NPISetareh\";\n"
"background-color:  rgb(255, 234, 0)"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEnabled(false);
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);
        lineEdit_2->setMinimumSize(QSize(230, 30));
        lineEdit_2->setStyleSheet(QString::fromUtf8("font: 12pt \"MV Boli\";\n"
"background-color: rgb(166, 166, 166);\n"
"color: black;"));
        lineEdit_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 15pt \"NPISetareh\";\n"
"background-color:  rgb(255, 234, 0)"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_3);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setEnabled(false);
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);
        lineEdit_3->setMinimumSize(QSize(230, 30));
        lineEdit_3->setStyleSheet(QString::fromUtf8("font: 12pt \"MV Boli\";\n"
"background-color: rgb(166, 166, 166);\n"
"color: black;"));
        lineEdit_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 15pt \"NPIRamin\";\n"
"hover\n"
"{\n"
"color: red;\n"
"border-color: red;\n"
"border-width: 2px;\n"
"}"));

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(AboutUsDialog);

        QMetaObject::connectSlotsByName(AboutUsDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutUsDialog)
    {
        AboutUsDialog->setWindowTitle(QCoreApplication::translate("AboutUsDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AboutUsDialog", " Release date:", nullptr));
        lineEdit->setText(QCoreApplication::translate("AboutUsDialog", "May, 2022", nullptr));
        label_2->setText(QCoreApplication::translate("AboutUsDialog", "By:", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("AboutUsDialog", "Arman Khalili", nullptr));
        label_3->setText(QCoreApplication::translate("AboutUsDialog", "Communication:", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("AboutUsDialog", "Arman78khalili@gmail.com", nullptr));
        pushButton->setText(QCoreApplication::translate("AboutUsDialog", "Back ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutUsDialog: public Ui_AboutUsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTUSDIALOG_H

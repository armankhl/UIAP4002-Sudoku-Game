/********************************************************************************
** Form generated from reading UI file 'getnamedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETNAMEDIALOG_H
#define UI_GETNAMEDIALOG_H

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

class Ui_GetNameDialog
{
public:
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *NameLine;
    QPushButton *pushButton;

    void setupUi(QDialog *GetNameDialog)
    {
        if (GetNameDialog->objectName().isEmpty())
            GetNameDialog->setObjectName(QString::fromUtf8("GetNameDialog"));
        GetNameDialog->resize(398, 125);
        GetNameDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(68, 68, 68);\n"
""));
        verticalLayoutWidget_2 = new QWidget(GetNameDialog);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(29, 9, 351, 101));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(150, 15));
        label->setStyleSheet(QString::fromUtf8("font: 15pt \"NPIRamin\";\n"
"background-color:  rgb(255, 238, 200);\n"
"	border-Radius: 7px;"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(5, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        NameLine = new QLineEdit(verticalLayoutWidget_2);
        NameLine->setObjectName(QString::fromUtf8("NameLine"));
        sizePolicy.setHeightForWidth(NameLine->sizePolicy().hasHeightForWidth());
        NameLine->setSizePolicy(sizePolicy);
        NameLine->setMinimumSize(QSize(25, 6));
        NameLine->setStyleSheet(QString::fromUtf8("background-color: white;"));

        horizontalLayout->addWidget(NameLine);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(verticalLayoutWidget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(185, 185, 185);\n"
"	border-Radius: 7px;\n"
"	font: 15pt \"NPIRamin\";\n"
"\n"
"\n"
"\n"
""));

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(GetNameDialog);

        QMetaObject::connectSlotsByName(GetNameDialog);
    } // setupUi

    void retranslateUi(QDialog *GetNameDialog)
    {
        GetNameDialog->setWindowTitle(QCoreApplication::translate("GetNameDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("GetNameDialog", "     Enter your name:", nullptr));
        pushButton->setText(QCoreApplication::translate("GetNameDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetNameDialog: public Ui_GetNameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETNAMEDIALOG_H

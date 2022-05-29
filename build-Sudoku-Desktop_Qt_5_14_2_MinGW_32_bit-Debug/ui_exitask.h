/********************************************************************************
** Form generated from reading UI file 'exitask.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXITASK_H
#define UI_EXITASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExitAsk
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *Yes;
    QPushButton *Cancel;

    void setupUi(QDialog *ExitAsk)
    {
        if (ExitAsk->objectName().isEmpty())
            ExitAsk->setObjectName(QString::fromUtf8("ExitAsk"));
        ExitAsk->resize(364, 128);
        ExitAsk->setStyleSheet(QString::fromUtf8("background-color: rgb(88, 85, 85);\n"
"border-Radius: 7px;"));
        verticalLayoutWidget = new QWidget(ExitAsk);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 9, 361, 101));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 10, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);\n"
"	font: 15pt \"Permanent Marker\";\n"
"	color: rgb(255, 249, 197);\n"
"	border-Radius: 7px;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 10, -1, -1);
        Yes = new QPushButton(verticalLayoutWidget);
        Yes->setObjectName(QString::fromUtf8("Yes"));
        Yes->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 15pt \"NPIRamin\";"));

        horizontalLayout->addWidget(Yes);

        Cancel = new QPushButton(verticalLayoutWidget);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));
        Cancel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 15pt \"NPIRamin\";"));

        horizontalLayout->addWidget(Cancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ExitAsk);

        QMetaObject::connectSlotsByName(ExitAsk);
    } // setupUi

    void retranslateUi(QDialog *ExitAsk)
    {
        ExitAsk->setWindowTitle(QCoreApplication::translate("ExitAsk", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ExitAsk", "Are Sure You Want To Exit?", nullptr));
        Yes->setText(QCoreApplication::translate("ExitAsk", "Yes", nullptr));
        Cancel->setText(QCoreApplication::translate("ExitAsk", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExitAsk: public Ui_ExitAsk {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXITASK_H

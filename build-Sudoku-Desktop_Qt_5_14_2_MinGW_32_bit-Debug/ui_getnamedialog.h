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
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GetNameDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GetNameDialog)
    {
        if (GetNameDialog->objectName().isEmpty())
            GetNameDialog->setObjectName(QString::fromUtf8("GetNameDialog"));
        GetNameDialog->resize(375, 125);
        GetNameDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(68, 68, 68);"));
        verticalLayoutWidget = new QWidget(GetNameDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 0, 341, 121));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(80, 15));
        label->setStyleSheet(QString::fromUtf8("font: 15pt \"NPISetareh\";\n"
"background-color:  rgb(255, 234, 0)"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(5, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(25, 6));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: white;"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(verticalLayoutWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStyleSheet(QString::fromUtf8("background-color:white;"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(GetNameDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GetNameDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GetNameDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GetNameDialog);
    } // setupUi

    void retranslateUi(QDialog *GetNameDialog)
    {
        GetNameDialog->setWindowTitle(QCoreApplication::translate("GetNameDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("GetNameDialog", "Enter your name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetNameDialog: public Ui_GetNameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETNAMEDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'sudokuwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUDOKUWINDOW_H
#define UI_SUDOKUWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SudokuWindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *SudokuTable;
    QHBoxLayout *horizontalLayout;
    QLineEdit *Rmes;
    QSpacerItem *horizontalSpacer;
    QPushButton *BackButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Finishbutton;

    void setupUi(QDialog *SudokuWindow)
    {
        if (SudokuWindow->objectName().isEmpty())
            SudokuWindow->setObjectName(QString::fromUtf8("SudokuWindow"));
        SudokuWindow->setEnabled(true);
        SudokuWindow->resize(682, 497);
        SudokuWindow->setTabletTracking(false);
        SudokuWindow->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 15pt \"NPIRamin\";\n"
"	background-color: rgb(161, 161, 161);\n"
"	border-Radius: 7px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color: red;\n"
"border-color: red;\n"
"border-width: 2px;\n"
"}\n"
""));
        verticalLayoutWidget = new QWidget(SudokuWindow);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 0, 552, 485));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        SudokuTable = new QTableWidget(verticalLayoutWidget);
        if (SudokuTable->columnCount() < 9)
            SudokuTable->setColumnCount(9);
        if (SudokuTable->rowCount() < 9)
            SudokuTable->setRowCount(9);
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::NoBrush);
        QFont font;
        font.setUnderline(false);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        __qtablewidgetitem->setBackground(brush);
        SudokuTable->setItem(0, 0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(0, 1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(0, 2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(0, 5, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(0, 8, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(1, 0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(1, 1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(1, 3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        SudokuTable->setItem(1, 4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(1, 8, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(2, 1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(2, 2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(2, 3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(2, 5, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(2, 6, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(2, 7, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(3, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        SudokuTable->setItem(3, 1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(3, 6, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(4, 1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(4, 2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(4, 3, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(4, 5, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(4, 6, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(4, 7, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(5, 2, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(5, 8, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(6, 1, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(6, 2, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        __qtablewidgetitem29->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(6, 3, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(6, 5, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        __qtablewidgetitem31->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(6, 6, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        __qtablewidgetitem32->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(6, 7, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        __qtablewidgetitem33->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(7, 0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        __qtablewidgetitem34->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(7, 5, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        SudokuTable->setItem(7, 6, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        __qtablewidgetitem36->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(7, 7, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        __qtablewidgetitem37->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(7, 8, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        __qtablewidgetitem38->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(8, 0, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        SudokuTable->setItem(8, 2, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        __qtablewidgetitem40->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(8, 3, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        __qtablewidgetitem41->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(8, 6, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        __qtablewidgetitem42->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(8, 7, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        __qtablewidgetitem43->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        SudokuTable->setItem(8, 8, __qtablewidgetitem43);
        SudokuTable->setObjectName(QString::fromUtf8("SudokuTable"));
        SudokuTable->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SudokuTable->sizePolicy().hasHeightForWidth());
        SudokuTable->setSizePolicy(sizePolicy);
        SudokuTable->setMinimumSize(QSize(550, 450));
        SudokuTable->setMaximumSize(QSize(550, 450));
        SudokuTable->setBaseSize(QSize(0, 0));
        SudokuTable->setAutoFillBackground(false);
        SudokuTable->setStyleSheet(QString::fromUtf8(""));
        SudokuTable->setLineWidth(1);
        SudokuTable->setMidLineWidth(0);
        SudokuTable->setProperty("showDropIndicator", QVariant(true));
        SudokuTable->setAlternatingRowColors(false);
        SudokuTable->setSelectionMode(QAbstractItemView::SingleSelection);
        SudokuTable->setIconSize(QSize(0, 0));
        SudokuTable->setTextElideMode(Qt::ElideLeft);
        SudokuTable->setShowGrid(true);
        SudokuTable->setRowCount(9);
        SudokuTable->setColumnCount(9);
        SudokuTable->horizontalHeader()->setVisible(false);
        SudokuTable->horizontalHeader()->setMinimumSectionSize(60);
        SudokuTable->horizontalHeader()->setDefaultSectionSize(60);
        SudokuTable->verticalHeader()->setVisible(false);
        SudokuTable->verticalHeader()->setMinimumSectionSize(49);
        SudokuTable->verticalHeader()->setDefaultSectionSize(49);

        verticalLayout->addWidget(SudokuTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Rmes = new QLineEdit(verticalLayoutWidget);
        Rmes->setObjectName(QString::fromUtf8("Rmes"));
        Rmes->setEnabled(false);
        sizePolicy.setHeightForWidth(Rmes->sizePolicy().hasHeightForWidth());
        Rmes->setSizePolicy(sizePolicy);
        Rmes->setMinimumSize(QSize(300, 25));
        Rmes->setMaximumSize(QSize(0, 16777215));
        Rmes->setStyleSheet(QString::fromUtf8(""));
        Rmes->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Rmes);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        BackButton = new QPushButton(verticalLayoutWidget);
        BackButton->setObjectName(QString::fromUtf8("BackButton"));
        sizePolicy.setHeightForWidth(BackButton->sizePolicy().hasHeightForWidth());
        BackButton->setSizePolicy(sizePolicy);
        BackButton->setMinimumSize(QSize(100, 25));

        horizontalLayout->addWidget(BackButton);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        Finishbutton = new QPushButton(verticalLayoutWidget);
        Finishbutton->setObjectName(QString::fromUtf8("Finishbutton"));
        sizePolicy.setHeightForWidth(Finishbutton->sizePolicy().hasHeightForWidth());
        Finishbutton->setSizePolicy(sizePolicy);
        Finishbutton->setMinimumSize(QSize(100, 25));

        horizontalLayout->addWidget(Finishbutton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SudokuWindow);

        QMetaObject::connectSlotsByName(SudokuWindow);
    } // setupUi

    void retranslateUi(QDialog *SudokuWindow)
    {
        SudokuWindow->setWindowTitle(QCoreApplication::translate("SudokuWindow", "Dialog", nullptr));

        const bool __sortingEnabled = SudokuTable->isSortingEnabled();
        SudokuTable->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem = SudokuTable->item(0, 1);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SudokuWindow", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = SudokuTable->item(0, 2);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SudokuWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = SudokuTable->item(0, 5);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("SudokuWindow", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = SudokuTable->item(0, 8);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("SudokuWindow", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = SudokuTable->item(1, 0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("SudokuWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = SudokuTable->item(1, 1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("SudokuWindow", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = SudokuTable->item(1, 3);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("SudokuWindow", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = SudokuTable->item(1, 8);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("SudokuWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = SudokuTable->item(2, 1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("SudokuWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = SudokuTable->item(2, 2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("SudokuWindow", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = SudokuTable->item(2, 3);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("SudokuWindow", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = SudokuTable->item(2, 5);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("SudokuWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = SudokuTable->item(2, 6);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("SudokuWindow", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = SudokuTable->item(2, 7);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("SudokuWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = SudokuTable->item(3, 0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("SudokuWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = SudokuTable->item(3, 6);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("SudokuWindow", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = SudokuTable->item(4, 1);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("SudokuWindow", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = SudokuTable->item(4, 2);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("SudokuWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = SudokuTable->item(4, 3);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("SudokuWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = SudokuTable->item(4, 5);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("SudokuWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = SudokuTable->item(4, 6);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("SudokuWindow", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = SudokuTable->item(4, 7);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("SudokuWindow", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = SudokuTable->item(5, 2);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("SudokuWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = SudokuTable->item(5, 8);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("SudokuWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = SudokuTable->item(6, 1);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("SudokuWindow", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = SudokuTable->item(6, 2);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("SudokuWindow", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = SudokuTable->item(6, 3);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("SudokuWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = SudokuTable->item(6, 5);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("SudokuWindow", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = SudokuTable->item(6, 6);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("SudokuWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = SudokuTable->item(6, 7);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("SudokuWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = SudokuTable->item(7, 0);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("SudokuWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = SudokuTable->item(7, 5);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("SudokuWindow", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = SudokuTable->item(7, 7);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("SudokuWindow", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = SudokuTable->item(7, 8);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("SudokuWindow", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = SudokuTable->item(8, 0);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("SudokuWindow", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = SudokuTable->item(8, 3);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("SudokuWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = SudokuTable->item(8, 6);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("SudokuWindow", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = SudokuTable->item(8, 7);
        ___qtablewidgetitem37->setText(QCoreApplication::translate("SudokuWindow", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = SudokuTable->item(8, 8);
        ___qtablewidgetitem38->setText(QCoreApplication::translate("SudokuWindow", "9", nullptr));
        SudokuTable->setSortingEnabled(__sortingEnabled);

        Rmes->setText(QString());
        BackButton->setText(QCoreApplication::translate("SudokuWindow", "Back", nullptr));
        Finishbutton->setText(QCoreApplication::translate("SudokuWindow", "Finish", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SudokuWindow: public Ui_SudokuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUDOKUWINDOW_H

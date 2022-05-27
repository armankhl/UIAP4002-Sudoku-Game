#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "getnamedialog.h"
#include "sudokuwindow.h"
#include "aboutusdialog.h"
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QScreen>

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	move(QGuiApplication::screens().at(0)->geometry().center() - frameGeometry().center());
	//	GetNameDialog NameDialog;
//	NameDialog.setModal(true);
//	NameDialog.exec();
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::on_ExitButton_clicked()
{
	this->close();
}


void MainWindow::on_StartButton_clicked()
{
//	on_ExitButton_clicked();
	this->close();
	SudokuWindow GameWindow;
	GameWindow.setModal(true);
	GameWindow.exec();
}

void MainWindow::on_AboutUsButton_clicked()
{
	AboutUsDialog AUsDialog;
	AUsDialog.setModal(1);
	AUsDialog.exec();
}

void MainWindow::on_pushButton_clicked()
{
	this->close();
}



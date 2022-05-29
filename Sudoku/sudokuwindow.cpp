#include "sudokuwindow.h"
#include "ui_sudokuwindow.h"
#include <QTableWidget>
#include <time.h>
#include <QTableWidgetItem>
#include "QString"
#include "wonwindow.h"
#include "mainwindow.h"
#include "exitask.h"

SudokuWindow::SudokuWindow(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::SudokuWindow)
{
	ui->setupUi(this);
	model = ui->SudokuTable->model();
}

SudokuWindow::~SudokuWindow()
{
	delete ui;
}

void SudokuWindow::on_SudokuTable_cellChanged(int row, int column)
{

	int Num = ui->SudokuTable->item(row , column)->text().toInt();
	if(Num < 1 || Num > 9)
	{
		ui->Rmes->setStyleSheet("QLineEdit { font: 10pt ;  background-color: rgb(255, 73, 73); color: Black; }");
		ui->Rmes->setText("Wrong Number!");
		ui->SudokuTable->item(row , column)->setText(nullptr);
	}
	else
	{
		bool NewNum=1;
		NewNum = CheckNum(row , column , Num);

		if(NewNum)
		{
			ui->Rmes->setStyleSheet("QLineEdit {font: 10pt ; background-color: rgb(116, 255, 78); color: Black;}");
			ui->Rmes->setText("Nice!");
		}
		else
		{
			ui->Rmes->setStyleSheet("QLineEdit { font: 10pt ;  background-color: rgb(255, 73, 73); color: Black; }");
			ui->Rmes->setText("Wrong Number. Try Again!" );
			ui->SudokuTable->item(row , column)->setText(nullptr);
		}
	}
}




bool SudokuWindow::CheckNum(int row , int column, int Num)
{
	int i, j;
	//check row:
	for( j=0 ; j<9 ; j++)
	{
		if(j == column) continue;
		if( Num == model->data(model->index(row,j)).toInt() )
		{
			return false;
		}
	}

	//check column
	for(i=0 ; i<9 ; i++)
	{
		if(i == row) continue;
		if( Num == model->data(model->index(i,column)).toInt() )
		{
			return false;
		}
	}


	//check squre
	int R = row;
	int C = column;
	if(row < 3) row = 0;
	else if(row < 6) row = 3;
	else if(row < 9) row = 6;

	if(column < 3) column = 0;
	else if(column < 6) column = 3;
	else if(column < 9) column = 6;

	for(i = row ; i < row+3 ; i++)
	{
		for(j = column ; j < column+3 ; j++)
		{
			if(i == R && j == C) continue;

			if( Num == model->data(model->index(i,j)).toInt())
			{
				return false;
			}
		}
	}
	return true;
}

bool SudokuWindow::CheckTable()
{
	for(int i = 0 ; i < 9 ; i++)
	{
		for(int j = 0 ; j < 9 ; j++)
		{
			if(ui->SudokuTable->item(i,j)->text() == nullptr)
			{
				return false;
			}
		}
	}
	return true;
}

void SudokuWindow::on_BackButton_clicked()
{
	this->close();
	MainWindow *newmainn = new MainWindow();
	newmainn->show();
}




void SudokuWindow::on_Finishbutton_clicked()
{
	bool FullTable = CheckTable();
	if(!FullTable)
	{
		ui->Rmes->setStyleSheet("QLineEdit { font: 10pt ;  background-color: rgb(255, 73, 73); color: Black; }");
		ui->Rmes->setText("PLZ Complete All Cells First! :|");
//		this->close();
//		WonWindow *newmain= new WonWindow();
//		newmain->show();
	}
	else
	{
		this->close();
		WonWindow *newmain= new WonWindow();
		newmain->show();
	}

}












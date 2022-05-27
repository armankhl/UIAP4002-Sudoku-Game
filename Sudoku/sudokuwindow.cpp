#include "sudokuwindow.h"
#include "ui_sudokuwindow.h"
#include <QTableWidget>
#include <time.h>
#include <QTableWidgetItem>
#include "QString"

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

//void SudokuWindow::SetItemColor(int row, int column, int t)
//{
//	if(t)
//	{
//		ui->SudokuTable->item(row, column)->setBackground(Qt::green);
//	}

//	if(t == 0)
//	{
//		ui->SudokuTable->item(row, column)->setBackground(Qt::red);
//	}
//}

void SudokuWindow::on_SudokuTable_cellChanged(int row, int column)
{

	int Num = ui->SudokuTable->item(row , column)->text().toInt();

	bool NewNum=1;
	NewNum = CheckNum(row , column , Num);

	if(NewNum)
	{
		ui->Rmes->setStyleSheet("QLineEdit { background: green; selection-background-color: green; }");
		ui->Rmes->setText("ACCEPTED");
	}
	else
	{
		ui->Rmes->setStyleSheet("QLineEdit { background: red; selection-background-color: red; }");
		ui->Rmes->setText("Wrong Number");
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

void SudokuWindow::on_BackButton_clicked()
{
	//complete later
	this->close();
}











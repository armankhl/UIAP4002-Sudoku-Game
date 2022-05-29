#include "exitask.h"
#include "ui_exitask.h"
#include "sudokuwindow.h"

ExitAsk::ExitAsk(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::ExitAsk)
{
	ui->setupUi(this);
}

ExitAsk::~ExitAsk()
{
	delete ui;
}



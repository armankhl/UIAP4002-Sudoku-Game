#include "getnamedialog.h"
#include "ui_getnamedialog.h"

GetNameDialog::GetNameDialog(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::GetNameDialog)
{
	ui->setupUi(this);
}

GetNameDialog::~GetNameDialog()
{
	delete ui;
}

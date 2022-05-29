#include "boardwindow.h"
#include "ui_boardwindow.h"
#include <QFile>
#include "QStringList"
#include "QTextStream"
#include "QString"

BoardWindow::BoardWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::BoardWindow)
{
	ui->setupUi(this);
	ShowPlayers();
}

BoardWindow::~BoardWindow()
{
	delete ui;
}

void BoardWindow::ShowPlayers()
{
	//find current player and Enhance his score
	QFile xfile("OnlinePlayer.txt");
	xfile.open(QIODevice::ReadOnly);
	QTextStream onin(&xfile);
	ui->PlayerName->setText( onin.readLine() );
	ui->PlayerScore->setText( onin.readLine() );
	xfile.close();

	QFile file("PlayerList.txt");
		file.open(QIODevice::ReadOnly);
		QTextStream rd(&file);
		file.seek(0);
		while( 1 )
		{
			ui->p1n->setText(rd.readLine()) ;
			ui->p1s->setText(rd.readLine()) ;
			if(rd.atEnd()) break;
			ui->p2n->setText(rd.readLine()) ;
			ui->p2s->setText(rd.readLine()) ;
			if(rd.atEnd()) break;
			ui->p3n->setText(rd.readLine()) ;
			ui->p3s->setText(rd.readLine()) ;
			if(rd.atEnd()) break;
			ui->p4n->setText(rd.readLine()) ;
			ui->p4s->setText(rd.readLine()) ;
			if(rd.atEnd()) break;
			ui->p5n->setText(rd.readLine()) ;
			ui->p5s->setText(rd.readLine()) ;
			break;
		}
		file.close();
}

void BoardWindow::on_Back_clicked()
{
	this->close();
}

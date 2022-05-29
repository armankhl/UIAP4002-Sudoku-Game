#include "wonwindow.h"
#include "ui_wonwindow.h"
#include "QFile"
#include "QStringList"
#include "QTextStream"
#include <QDebug>
#include "mainwindow.h"
WonWindow::WonWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::WonWindow)
{
	ui->setupUi(this);

	setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
	show();
}

WonWindow::~WonWindow()
{
	delete ui;
}

int CountPlayers()
{
	int n = 0;
	QFile file("PlayerList.txt");
	file.open(QIODevice::ReadOnly);
	QTextStream rd(&file);
	while(!rd.atEnd())
	{
		n++;
		rd.readLine();
	}
	file.close();

	return n/2 ;
}

void SaveSortScore()
{
	int PN = CountPlayers();
	struct PlayerData
	{
		QString Name;
		int Point;
	};
	PlayerData *Player = new PlayerData[PN];
	PlayerData OnPlayer, temp;

	//read Players
	QFile file("PlayerList.txt");
	file.open(QIODevice::ReadOnly);
	QTextStream rd(&file);
	file.seek(0);
	for(int i = 0 ; i < PN ; i++)
	{
		Player[i].Name = rd.readLine();
		Player[i].Point = rd.readLine().toInt();
	}
	file.close();

	//find current player and Enhance his score
	QFile xfile("OnlinePlayer.txt");
	xfile.open(QIODevice::ReadOnly);
	QTextStream onin(&xfile);
	OnPlayer.Name = onin.readLine();
	OnPlayer.Point = onin.readLine().toInt();
	xfile.close();

	for(int i = 0 ; i < PN ; i++)
	{
		if(Player[i].Name == OnPlayer.Name)
		{
			Player[i].Point += 100;
			OnPlayer.Point += 100;
		}

	}

	//write CURRENT Player New Score
	QFile xxfile("OnlinePlayer.txt");
	xxfile.open(QIODevice::WriteOnly);
	QTextStream nonin(&xxfile);
	nonin << OnPlayer.Name << endl<< OnPlayer.Point << endl;
	xxfile.close();

	//Sort players
	for(int j=0 ; j < PN-1 ; j++)
		{
			for(int i=0 ; i < PN - j - 1 ; i++)
			{
				if(Player[i].Point < Player[i+1].Point )
				{
					temp = Player[i];
					Player[i] = Player[i+1];
					Player[i+1] = temp;
				}
			}
		}


	//write players
	QFile lfile("PlayerList.txt");
	lfile.open(QIODevice::WriteOnly);
	QTextStream wdd(&lfile);
	lfile.seek(0);
	for(int i=0 ; i < PN ; i++)
	{
		wdd << Player[i].Name << endl;
		wdd << Player[i].Point << endl;
	}
	lfile.close();
}


void WonWindow::on_pushButton_clicked()
{
	SaveSortScore();
	this->close();
	MainWindow *newmainn = new MainWindow();
	newmainn->show();
}

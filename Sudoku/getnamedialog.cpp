#include "getnamedialog.h"
#include "ui_getnamedialog.h"
#include "QString"
#include "QFile"
#include "QStringList"
#include "QTextStream"

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

int CountPlayerss()
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

void Save(QString PName)
{
	int PNum = CountPlayerss() ;
	int OnPly = 0;
	struct PlayerData
	{
		QString Name;
		int Point;
	};
	bool Newplyr = true;
	PlayerData *Player = new PlayerData[PNum];


	QFile file("PlayerList.txt");
	file.open(QIODevice::ReadOnly);
	QTextStream rd(&file);
	file.seek(0);
	for(int i = 0 ; i < PNum ; i++)
	{
		Player[i].Name = rd.readLine();
		Player[i].Point = rd.readLine().toInt();
	}
	file.close();

	for(int i = 0 ; i < PNum ; i++)
	{
		if(Player[i].Name == PName)
		{
			Newplyr = false;
			OnPly = i;
			break;
		}
	}


	//check new or not


	if(Newplyr)
	{
		QFile file("PlayerList.txt");
		file.open(QIODevice::Append);
		QTextStream in(&file);
		in << PName << endl<< 0 << endl;
		file.close();

		QFile xfile("OnlinePlayer.txt");
		xfile.open(QIODevice::WriteOnly);
		QTextStream onin(&xfile);
		onin << PName << endl<< 0 << endl;
		xfile.close();
	}

	else
	{

		QFile xfile("OnlinePlayer.txt");
		xfile.open(QIODevice::WriteOnly);
		QTextStream onin(&xfile);
		onin << Player[OnPly].Name << endl<< Player[OnPly].Point << endl;
		xfile.close();
	}

}

void GetNameDialog::on_pushButton_clicked()
{
	QString PlayerName = ui->NameLine->text();
	if(PlayerName == nullptr) PlayerName = "Guest";
	Save(PlayerName);
	this->close();
}



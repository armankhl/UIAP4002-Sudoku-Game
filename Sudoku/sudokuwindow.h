#ifndef SUDOKUWINDOW_H
#define SUDOKUWINDOW_H

#include <QDialog>
#include <QTableWidgetItem>
#include <QAbstractItemModel>

namespace Ui {
class SudokuWindow;
}

class SudokuWindow : public QDialog
{
	Q_OBJECT

public:
	explicit SudokuWindow(QWidget *parent = nullptr);
	~SudokuWindow();

	QAbstractItemModel * model;
private slots:


	void SetItemColor(int x, int y, int t);

	bool CheckNum(int row , int column, int Num);

	bool CheckTable();

	void on_BackButton_clicked();

	void on_SudokuTable_cellChanged(int row, int column);

	void on_Finishbutton_clicked();

private:
		Ui::SudokuWindow *ui;
};

#endif // SUDOKUWINDOW_H

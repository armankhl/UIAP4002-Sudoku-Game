#ifndef WONWINDOW_H
#define WONWINDOW_H

#include <QMainWindow>

namespace Ui {
class WonWindow;
}

class WonWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit WonWindow(QWidget *parent = nullptr);
	~WonWindow();

private slots:
	void on_pushButton_clicked();

private:
	Ui::WonWindow *ui;
};

#endif // WONWINDOW_H

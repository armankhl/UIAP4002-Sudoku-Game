#ifndef GETNAMEDIALOG_H
#define GETNAMEDIALOG_H

#include <QDialog>

namespace Ui {
class GetNameDialog;
}

class GetNameDialog : public QDialog
{
	Q_OBJECT

public:
	explicit GetNameDialog(QWidget *parent = nullptr);
	~GetNameDialog();

private slots:
	void on_pushButton_clicked();

private:
	Ui::GetNameDialog *ui;
};

#endif // GETNAMEDIALOG_H

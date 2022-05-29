#ifndef EXITASK_H
#define EXITASK_H

#include <QDialog>

namespace Ui {
class ExitAsk;
}

class ExitAsk : public QDialog
{
	Q_OBJECT

public:
	explicit ExitAsk(QWidget *parent = nullptr);
	~ExitAsk();

private slots:

private:
	Ui::ExitAsk *ui;
};

#endif // EXITASK_H

#ifndef STACKEDDLG_H
#define STACKEDDLG_H

#include <QWidget>

class QListWidget;
class QStackedWidget;
class QLabel;

class stackedDlg : public QWidget
{
	Q_OBJECT

public:
	stackedDlg(QWidget *parent=0);
	~stackedDlg();

private:
	QListWidget *leftlist;
	QStackedWidget *stack;
};

#endif // STACKEDDLG_H

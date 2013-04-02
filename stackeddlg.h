#ifndef STACKEDDLG_H
#define STACKEDDLG_H

#include <QWidget>
#include <QListWidget>
#include <QHBoxLayout>
#include <QStackedWidget>
#include "groupmng.h"
#include "welcome.h"


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
	GroupMng *groupmng;
	Welcome *welcome;

};

#endif // STACKEDDLG_H

#include "stackeddlg.h"
#include <QListWidget>
#include <QHBoxLayout>
#include <QStackedWidget>

stackedDlg::stackedDlg(QWidget *parent)
	: QWidget(parent)
{
	leftlist = new QListWidget;
	leftlist->insertItem(0,"分组管理");
	leftlist->insertItem(1,"文档管理");
	leftlist->insertItem(2,"指标管理");
	leftlist->insertItem(3,"评分管理");
	leftlist->insertItem(4,"互评管理");
	leftlist->insertItem(5,"贡献管理");
	leftlist->insertItem(6,"成绩管理");

	stack = new QStackedWidget;

	QHBoxLayout *mainLayout = new QHBoxLayout;
	mainLayout->setMargin(5);
	mainLayout->setSpacing(5);
	mainLayout->addWidget(leftlist);
	mainLayout->addWidget(stack,0,Qt::AlignHCenter);
	mainLayout->setStretchFactor(leftlist,1);
	mainLayout->setStretchFactor(stack,7);
	connect(leftlist,SIGNAL(currentRowChanged(int)),stack,SLOT(setCurrentIndex(int)));

	setLayout(mainLayout);
}

stackedDlg::~stackedDlg()
{

}

#include "stackeddlg.h"


stackedDlg::stackedDlg(QWidget *parent)
	: QWidget(parent)
{
	leftlist = new QListWidget;
	leftlist->insertItem(0,tr("欢迎"));
	leftlist->insertItem(1,tr("分组管理"));
	leftlist->insertItem(2,tr("文档管理"));
	leftlist->insertItem(3,tr("指标管理"));
	leftlist->insertItem(4,tr("评分管理"));
	leftlist->insertItem(5,tr("互评管理"));
	leftlist->insertItem(6,tr("贡献管理"));
	leftlist->insertItem(7,tr("成绩管理"));

	groupmng = new GroupMng;
	welcome = new Welcome;

	stack = new QStackedWidget;
	stack->addWidget(welcome);
	stack->addWidget(groupmng);

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

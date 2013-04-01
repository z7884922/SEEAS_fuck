#include "stackeddlg.h"


stackedDlg::stackedDlg(QWidget *parent)
	: QWidget(parent)
{
	leftlist = new QListWidget;
	leftlist->insertItem(0,tr("�������"));
	leftlist->insertItem(1,tr("�ĵ�����"));
	leftlist->insertItem(2,tr("ָ�����"));
	leftlist->insertItem(3,tr("���ֹ���"));
	leftlist->insertItem(4,tr("��������"));
	leftlist->insertItem(5,tr("���׹���"));
	leftlist->insertItem(6,tr("�ɼ�����"));

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

#include "seeas.h"



SEEAS::SEEAS(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	stackedDlg *dlg = new stackedDlg;
	//���ô���������ͼ��
	this->setWindowTitle(tr("����γ̹���ϵͳ"));
	this->setWindowIcon(QIcon(":/system.png"));
	//����ϵ�ж���
	openAction = new QAction(tr("��"),this);
	openAction->setStatusTip(tr("��֮ǰ�����ּ�¼��"));
	openAction->setIcon(QIcon(":/Resources/open-file.png"));

	saveAction = new QAction(tr("����"),this);
	saveAction->setStatusTip(tr("�������ڵ��޸ġ�"));
	saveAction->setIcon(QIcon(":/Resources/save.png"));

	defaultAction = new QAction(tr("����"),this);
	defaultAction->setStatusTip(tr("�ָ�Ĭ�ϡ�"));
	defaultAction->setIcon(QIcon(":/Resources/reset.png"));

	generateAction = new QAction(tr("���ɱ�"),this);
	generateAction->setStatusTip(tr("���ɵ�ǰ����"));
	generateAction->setIcon(QIcon(":/Resources/generate-tables.png"));

	previewAction = new QAction(tr("Ԥ��"),this);
	previewAction->setStatusTip(tr("Ԥ�������ɵı���"));
	previewAction->setIcon(QIcon(":/Resources/preview-tabels.png"));

	exploreAction = new QAction(tr("�鿴���ݿ�"),this);
	exploreAction->setStatusTip(tr("�鿴��ǰ���ݿ��е����ݡ�"));
	exploreAction->setIcon(QIcon(":/Resources/database.png"));

	calculateAction = new QAction(tr("����"),this);
	calculateAction->setStatusTip(tr("����������ֵ���ܷ֡�"));
	calculateAction->setIcon(QIcon(":/Resources/calculator.png"));
	//״̬��
	statulLabel = new QLabel;
	statulLabel->setMinimumSize(statulLabel->sizeHint());
	statulLabel->setAlignment(Qt::AlignHCenter); 
	statusBar()->addWidget(statulLabel);
	//������
	QToolBar *toolBar = addToolBar(tr("����")); 
	//toolBar->setWindowIcon(QIcon(":/toolbar.png"));
	toolBar->addAction(openAction);
	toolBar->addAction(saveAction);
	toolBar->addAction(defaultAction);
	toolBar->addAction(generateAction);
	toolBar->addAction(previewAction);
	toolBar->addAction(exploreAction);
	toolBar->addAction(calculateAction);
	//�����м�widget
	setCentralWidget(dlg);
}

SEEAS::~SEEAS()
{

}

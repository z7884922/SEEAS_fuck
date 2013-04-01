#include "seeas.h"



SEEAS::SEEAS(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	stackedDlg *dlg = new stackedDlg;

	this->setWindowTitle(tr("大软课程管理系统"));
	this->setWindowIcon(QIcon(":/system.png"));

	openAction = new QAction(tr("打开"),this);
	openAction->setStatusTip(tr("打开之前的评分记录"));
	openAction->setIcon(QIcon(":/Resources/open-file.png"));

	saveAction = new QAction(tr("保存"),this);
	saveAction->setStatusTip(tr("保存现在的修改"));
	saveAction->setIcon(QIcon(":/Resources/save.png"));

	defaultAction = new QAction(tr("重置"),this);
	defaultAction->setStatusTip(tr("恢复默认。"));
	defaultAction->setIcon(QIcon(":/Resources/reset.png"));

	generateAction = new QAction(tr("生成表单"),this);
	generateAction->setStatusTip(tr("生成当前表单。"));
	generateAction->setIcon(QIcon(":/Resources/generate-tables.png"));

	previewAction = new QAction("preview-table",this);
	previewAction->setStatusTip("preview a table.");
	previewAction->setIcon(QIcon(":/Resources/preview-tabels.png"));

	exploreAction = new QAction("database",this);
	exploreAction->setStatusTip("explore the database.");
	exploreAction->setIcon(QIcon(":/Resources/database.png"));

	calculateAction = new QAction("calculate",this);
	calculateAction->setStatusTip("calculate the score.");
	calculateAction->setIcon(QIcon(":/Resources/calculator.png"));

	statulLabel = new QLabel;
	statulLabel->setMinimumSize(statulLabel->sizeHint());
	statulLabel->setAlignment(Qt::AlignHCenter); 
	statusBar()->addWidget(statulLabel);

	QToolBar *toolBar = addToolBar(tr("操作")); 
	//toolBar->setWindowIcon(QIcon(":/toolbar.png"));
	toolBar->addAction(openAction);
	toolBar->addAction(saveAction);
	toolBar->addAction(defaultAction);
	toolBar->addAction(generateAction);
	toolBar->addAction(previewAction);
	toolBar->addAction(exploreAction);
	toolBar->addAction(calculateAction);

	setCentralWidget(dlg);
}

SEEAS::~SEEAS()
{

}

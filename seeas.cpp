#include "seeas.h"



SEEAS::SEEAS(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	stackedDlg *dlg = new stackedDlg;

	this->setWindowTitle(tr("大软课程管理系统"));
	this->setWindowIcon(QIcon(":/system.png"));

	openAction = new QAction("&open",this);
	openAction->setStatusTip("open a file.");
	openAction->setIcon(QIcon(":/Resources/open-file.png"));

	saveAction = new QAction("save",this);
	saveAction->setStatusTip("save a file.");
	saveAction->setIcon(QIcon(":/Resources/save.png"));

	defaultAction = new QAction("default",this);
	defaultAction->setStatusTip("default the file.");
	defaultAction->setIcon(QIcon(":/Resources/reset.png"));

	generateAction = new QAction("generate_tabel",this);
	generateAction->setStatusTip("generate a table.012447");
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

	QToolBar *toolBar = addToolBar(tr("&File")); 
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

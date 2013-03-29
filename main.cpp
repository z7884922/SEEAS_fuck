#include "seeas.h"
#include <QtGui/QApplication>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	QTextCodec::setCodecForTr(QTextCodec::codecForName("GB2312"));
	QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GB2312"));
    
	QPixmap pixmap(":/Resources/splash1.jpg");
	QSplashScreen splash(pixmap);
	splash.show();

	Qt::Alignment bottomRight = Qt::AlignRight | Qt::AlignBottom;
	splash.showMessage(QObject::tr("载入主窗口..."), bottomRight, Qt::black);

	SEEAS w;

	for (int i=0; i<5000; i++){
		splash.repaint();
	}
	
	splash.showMessage(QObject::tr("载入模块..."), bottomRight, Qt::black);

	for (int i=0; i<5000; i++){
		splash.repaint();
	}

	w.show();

	splash.finish(&w);
	return a.exec();
}

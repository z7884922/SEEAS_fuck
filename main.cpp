#include "seeas.h"
#include <QtGui/QApplication>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//���ı���
	QTextCodec::setCodecForTr(QTextCodec::codecForName("GB2312"));
	QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GB2312"));
    //�������
	QPixmap pixmap(":/Resources/splash1.jpg");
	QSplashScreen splash(pixmap);
	splash.show();
	
	Qt::Alignment bottomRight = Qt::AlignRight | Qt::AlignBottom;		//���ÿ�ʼ������ʾ���ֵĶ���
	splash.showMessage(QObject::tr("����������..."), bottomRight, Qt::black);

	SEEAS w;
	//���뻭����ͣ
	/*for (int i=0; i<5000; i++){
		splash.repaint();
	}*/
	
	splash.showMessage(QObject::tr("����ģ��..."), bottomRight, Qt::black);
	//���뻭����ͣ
	/*for (int i=0; i<5000; i++){
	splash.repaint();
	}*/

	w.show();

	splash.finish(&w);
	return a.exec();
}

/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created: Tue Apr 2 17:35:33 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Welcome
{
public:
    QTextBrowser *textBrowser;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Welcome)
    {
        if (Welcome->objectName().isEmpty())
            Welcome->setObjectName(QString::fromUtf8("Welcome"));
        Welcome->resize(507, 372);
        Welcome->setMouseTracking(false);
        textBrowser = new QTextBrowser(Welcome);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(360, 240, 91, 91));
        label = new QLabel(Welcome);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 271, 31));
        widget = new QWidget(Welcome);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 210, 77, 121));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);


        retranslateUi(Welcome);

        QMetaObject::connectSlotsByName(Welcome);
    } // setupUi

    void retranslateUi(QWidget *Welcome)
    {
        Welcome->setWindowTitle(QApplication::translate("Welcome", "Welcome", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("Welcome", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Resources/29.png\" /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Welcome", "\345\260\217\346\234\213\345\217\213\344\273\254\345\244\247\345\256\266\345\245\275\357\274\232\n"
"    \346\254\242\350\277\216\344\275\277\347\224\250XX\347\263\273\347\273\237\357\274\201", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Welcome", "\345\205\263\344\272\216\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Welcome", "\345\205\263\344\272\216\346\210\221\344\273\254", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Welcome", "\345\205\263\344\272\216QT", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Welcome: public Ui_Welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H

/********************************************************************************
** Form generated from reading UI file 'seeas.ui'
**
** Created: Fri Mar 29 17:21:45 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEEAS_H
#define UI_SEEAS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SEEASClass
{
public:
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SEEASClass)
    {
        if (SEEASClass->objectName().isEmpty())
            SEEASClass->setObjectName(QString::fromUtf8("SEEASClass"));
        SEEASClass->resize(800, 600);
        centralWidget = new QWidget(SEEASClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        SEEASClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(SEEASClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        SEEASClass->setStatusBar(statusBar);

        retranslateUi(SEEASClass);

        QMetaObject::connectSlotsByName(SEEASClass);
    } // setupUi

    void retranslateUi(QMainWindow *SEEASClass)
    {
        SEEASClass->setWindowTitle(QApplication::translate("SEEASClass", "SEEAS", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SEEASClass: public Ui_SEEASClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEEAS_H

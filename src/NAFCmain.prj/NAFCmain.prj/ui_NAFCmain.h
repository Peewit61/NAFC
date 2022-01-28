/********************************************************************************
** Form generated from reading UI file 'NAFCmainJYrDEn.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef NAFCMAINJYRDEN_H
#define NAFCMAINJYRDEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NAFCmainClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *NAFCmainClass)
    {
        if (NAFCmainClass->objectName().isEmpty())
            NAFCmainClass->setObjectName(QString::fromUtf8("NAFCmainClass"));
        NAFCmainClass->resize(600, 400);
        centralWidget = new QWidget(NAFCmainClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        NAFCmainClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(NAFCmainClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        NAFCmainClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(NAFCmainClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        NAFCmainClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(NAFCmainClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        NAFCmainClass->setStatusBar(statusBar);

        retranslateUi(NAFCmainClass);

        QMetaObject::connectSlotsByName(NAFCmainClass);
    } // setupUi

    void retranslateUi(QMainWindow *NAFCmainClass)
    {
        NAFCmainClass->setWindowTitle(QCoreApplication::translate("NAFCmainClass", "NAFCmain", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NAFCmainClass: public Ui_NAFCmainClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // NAFCMAINJYRDEN_H

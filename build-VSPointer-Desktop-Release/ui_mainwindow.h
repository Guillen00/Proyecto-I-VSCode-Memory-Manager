/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ventana
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QToolBar *toolBar;

    void setupUi(QMainWindow *ventana)
    {
        if (ventana->objectName().isEmpty())
            ventana->setObjectName(QStringLiteral("ventana"));
        ventana->resize(1000, 700);
        centralwidget = new QWidget(ventana);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 981, 671));
        ventana->setCentralWidget(centralwidget);
        toolBar = new QToolBar(ventana);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        ventana->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(ventana);

        QMetaObject::connectSlotsByName(ventana);
    } // setupUi

    void retranslateUi(QMainWindow *ventana)
    {
        ventana->setWindowTitle(QApplication::translate("ventana", "Proyecto 1 D2", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("ventana", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ventana: public Ui_ventana {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

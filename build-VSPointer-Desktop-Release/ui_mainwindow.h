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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ventana
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QPushButton *Conectar;
    QLabel *label;
    QLabel *label_2;
    QToolBar *toolBar;

    void setupUi(QMainWindow *ventana)
    {
        if (ventana->objectName().isEmpty())
            ventana->setObjectName(QStringLiteral("ventana"));
        ventana->resize(1195, 700);
        centralwidget = new QWidget(ventana);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 981, 671));
        Conectar = new QPushButton(centralwidget);
        Conectar->setObjectName(QStringLiteral("Conectar"));
        Conectar->setGeometry(QRect(1020, 120, 141, 71));
        QFont font;
        font.setUnderline(false);
        font.setStrikeOut(false);
        Conectar->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1000, 270, 161, 17));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(1000, 310, 171, 20));
        QFont font2;
        font2.setItalic(true);
        label_2->setFont(font2);
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
        Conectar->setText(QApplication::translate("ventana", "Conectar a Servidor", Q_NULLPTR));
        label->setText(QApplication::translate("ventana", "Memoria Utilizada:", Q_NULLPTR));
        label_2->setText(QApplication::translate("ventana", "Memoria del Computador", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("ventana", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ventana: public Ui_ventana {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

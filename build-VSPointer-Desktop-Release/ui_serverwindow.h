/********************************************************************************
** Form generated from reading UI file 'serverwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERWINDOW_H
#define UI_SERVERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Serverwindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Serverwindow)
    {
        if (Serverwindow->objectName().isEmpty())
            Serverwindow->setObjectName(QStringLiteral("Serverwindow"));
        Serverwindow->resize(480, 142);
        centralwidget = new QWidget(Serverwindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 131, 17));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(330, 20, 89, 25));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 70, 221, 20));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 20, 141, 25));
        Serverwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Serverwindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 480, 22));
        Serverwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(Serverwindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Serverwindow->setStatusBar(statusbar);

        retranslateUi(Serverwindow);

        QMetaObject::connectSlotsByName(Serverwindow);
    } // setupUi

    void retranslateUi(QMainWindow *Serverwindow)
    {
        Serverwindow->setWindowTitle(QApplication::translate("Serverwindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("Serverwindow", "Pueto de escucha:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Serverwindow", "Habilitar", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Serverwindow: public Ui_Serverwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERWINDOW_H

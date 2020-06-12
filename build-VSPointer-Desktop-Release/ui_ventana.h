/********************************************************************************
** Form generated from reading UI file 'ventana.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANA_H
#define UI_VENTANA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QLabel *label_7;
    QPushButton *pushButton;
    QLabel *label_8;
    QToolBar *toolBar;

    void setupUi(QMainWindow *ventana)
    {
        if (ventana->objectName().isEmpty())
            ventana->setObjectName(QStringLiteral("ventana"));
        ventana->resize(1303, 700);
        centralwidget = new QWidget(ventana);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 981, 671));
        Conectar = new QPushButton(centralwidget);
        Conectar->setObjectName(QStringLiteral("Conectar"));
        Conectar->setGeometry(QRect(1070, 250, 141, 71));
        QFont font;
        font.setUnderline(false);
        font.setStrikeOut(false);
        Conectar->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1060, 410, 161, 17));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(1060, 450, 171, 20));
        QFont font2;
        font2.setItalic(true);
        label_2->setFont(font2);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(1010, 110, 67, 17));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(1150, 70, 141, 25));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(1150, 150, 141, 25));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(1150, 110, 141, 25));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(1010, 70, 91, 17));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(1010, 150, 91, 17));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(1010, 190, 151, 20));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(1150, 190, 141, 25));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(1016, 350, 271, 20));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1070, 520, 89, 25));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(1070, 570, 67, 17));
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
        label_3->setText(QApplication::translate("ventana", "Puerto:", Q_NULLPTR));
        label_4->setText(QApplication::translate("ventana", "Direcci\303\263n IP:", Q_NULLPTR));
        label_5->setText(QApplication::translate("ventana", "Contrase\303\261a:", Q_NULLPTR));
        label_6->setText(QApplication::translate("ventana", "Nombre de Usuario:", Q_NULLPTR));
        label_7->setText(QString());
        pushButton->setText(QApplication::translate("ventana", "PushButton", Q_NULLPTR));
        label_8->setText(QApplication::translate("ventana", "TextLabel", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("ventana", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ventana: public Ui_ventana {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA_H

/********************************************************************************
** Form generated from reading UI file 'connection.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTION_H
#define UI_CONNECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_connection
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;

    void setupUi(QMainWindow *connection)
    {
        if (connection->objectName().isEmpty())
            connection->setObjectName(QStringLiteral("connection"));
        connection->resize(308, 274);
        centralwidget = new QWidget(connection);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 91, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 67, 17));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 90, 91, 17));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 130, 151, 20));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 10, 141, 25));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 50, 141, 25));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(150, 90, 141, 25));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(150, 130, 141, 25));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 190, 89, 25));
        connection->setCentralWidget(centralwidget);

        retranslateUi(connection);

        QMetaObject::connectSlotsByName(connection);
    } // setupUi

    void retranslateUi(QMainWindow *connection)
    {
        connection->setWindowTitle(QApplication::translate("connection", "Conecci\303\263n", Q_NULLPTR));
        label->setText(QApplication::translate("connection", "Direcci\303\263n IP:", Q_NULLPTR));
        label_2->setText(QApplication::translate("connection", "Puerto:", Q_NULLPTR));
        label_3->setText(QApplication::translate("connection", "Contrase\303\261a:", Q_NULLPTR));
        label_4->setText(QApplication::translate("connection", "Nombre de Usuario:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("connection", "Conectar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class connection: public Ui_connection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTION_H

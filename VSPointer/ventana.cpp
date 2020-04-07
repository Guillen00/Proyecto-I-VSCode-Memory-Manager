#include "vspointer.h"
#include "ui_ventana.h"
#include <QDebug>


ventana::ventana(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ventana)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(5);
    QStringList NAMES;
    NAMES<<"Nombre de Variable"<<"Tipo"<<"Contenido"<<"Referencias"<<"Dirección de Memoria";
    ui->tableWidget->setHorizontalHeaderLabels(NAMES);
    ui->tableWidget->setColumnWidth(0,200);
    ui->tableWidget->setColumnWidth(1,80);
    ui->tableWidget->setColumnWidth(2,150);
    ui->tableWidget->setColumnWidth(3,91);
    ui->tableWidget->setColumnWidth(4,460);



}

ventana::~ventana()
{
    delete ui;
}



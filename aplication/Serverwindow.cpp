#include "Serverwindow.h"
#include "ui_Serverwindow.h"
#include "servidorsocket.h"
/*#include "enumeraciones1.h"
#include <VSPtr.h>

Serverwindow::Serverwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Serverwindow)
{
    ui->setupUi(this);
    mServidorSocket = makeServidor();

}

Serverwindow::~Serverwindow()
{

    delete ui;
}

void Serverwindow::closeEvent(QCloseEvent *event)
{
    mServidorSocket->desconectaClientes();
    QWidget::closeEvent(event);
}

void Serverwindow::on_pushButton_clicked()
{
    quint16 puerto = quint16(ui->lineEdit->text().toUInt());

    if (puerto == 0)
    {
        return;
    }

    mServidorSocket->setPuerto(puerto);
    mServidorSocket->inicia();
    ui->lineEdit->setEnabled(false);
    ui->label_2->setText("Esperando...");

}
ServidorSocket *Serverwindow::makeServidor()
{
    ServidorSocket *servidor = new ServidorSocket(this);



    connect(servidor, &ServidorSocket::mensajeRecibido, this,
            [&](int enumeracion, const QString &mensaje, ClienteSocket *socket)
    {
        (void) socket;
        if (enumeracion == InfoQuery)
        {
            ui->label_2->setText(mensaje);
            mServidorSocket->PASSWORD= mensaje;

        }


            QString ruta = "si funciona";
            mServidorSocket->enviaMensaje(InfoResponse,ruta,socket);


    });

    return servidor;
}
*/

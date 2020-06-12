#include "ventana.h"
#include "ui_ventana.h"
#include <QDebug>
#include "enumeraciones.h"
#include "clientesocket.h"

#include <QCryptographicHash>

ventana::ventana(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ventana)
{
    ui->setupUi(this);
    mClienteSocket = makeSocket();
    ui->tableWidget->setColumnCount(5);
    Password="montealto";
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

void ventana::closeEvent(QCloseEvent *event){
    mClienteSocket->disconnectFromHost();
    QWidget::closeEvent(event);
}

void ventana::on_Conectar_clicked()
{

    if(Passwordconvert(Password)==Passwordconvert(ui->lineEdit_3->text())){

        qDebug()<<ui->lineEdit->text();
        QString ipServidor = ui->lineEdit->text();
        quint16 puertoServidor = quint16(ui->lineEdit_2->text().toUInt());

        if (ipServidor.isEmpty())
        {
            return;
        }
        if (puertoServidor == 0)
        {
            return;
        }
        mClienteSocket->ppp(8);
        qDebug()<<"paso la primera";
        mClienteSocket->setDireccionDelServidor(ipServidor);
        qDebug()<<"paso la segunda";
        mClienteSocket->setPuertoDelServidor(puertoServidor);
        qDebug()<<"paso la tercera";
        mClienteSocket->conectaConElServidor();
        ui->Conectar->setText("Conectado");
        qDebug()<<"paso la final";
        ui->label_7->setText("Conexión exitosa");

        mClienteSocket->enviaMensaje(InfoQuery, ui->lineEdit_3->text());
    }
    else{
        ui->label_7->setText("La contraseña es incorrecta");
    }






}

ClienteSocket *ventana::makeSocket()
{
    ClienteSocket *socket = new ClienteSocket(this);

    connect(socket, &ClienteSocket::mensajeRecibido, this,
            [&](int enumeracion, const QString &mensaje, ClienteSocket *socket)
    {
        (void) socket;
        if (enumeracion == InfoResponse)
        {

        }
    });

    return socket;
}


void ventana::on_pushButton_clicked()
{


}
QString ventana::Passwordconvert(QString password){
    QCryptographicHash Passwordmd5 (QCryptographicHash::Md5);
    QByteArray input;
    input.append(password);
    Passwordmd5.addData(input);
    return Passwordmd5.result().toHex();
}

#include  <clientesocket.h>
#include <qabstractsocket.h>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QDebug>


QString mDireccionDelServidor;
quint16 mPuertoDelServidor;
bool mConectado;

ClienteSocket::ClienteSocket(QObject *parent) : QTcpSocket { parent }
{
    mDireccionDelServidor = "";
    mPuertoDelServidor = 0;
    mConectado = false;

    connect(this, &ClienteSocket::readyRead, this, [&]()
    {
        QJsonDocument doc = QJsonDocument::fromJson(readAll());
        QJsonObject obj = doc.object();
        const int enumeracion = obj["enumeracion"].toInt();
        QString mensaje = obj["mensaje"].toString();
        emit mensajeRecibido(enumeracion, mensaje, this);
    });

    connect(this, &ClienteSocket::stateChanged, this, [&](QAbstractSocket::SocketState state)
    {
        if (state == QAbstractSocket::UnconnectedState)
        {
            emit desconectado(this);
        }
    });
}

void ClienteSocket::enviaMensaje(int enumeracion, const QString &mensaje)
{
    QJsonDocument doc;
    QJsonObject obj;
    obj["enumeracion"] = enumeracion;
    obj["mensaje"] = mensaje;
    doc.setObject(obj);
    write(doc.toJson(QJsonDocument::Compact));
}

void ClienteSocket::setDireccionDelServidor(const QString &ip)
{

    mDireccionDelServidor = ip;
    qDebug()<<"paso setdirecciones  "+mDireccionDelServidor;
}

void ClienteSocket::setPuertoDelServidor(quint16 puerto)
{

    mPuertoDelServidor = puerto;
}

void ClienteSocket::conectaConElServidor()
{


    if (!mConectado)
    {
        qDebug()<<mConectado;
        qDebug()<<mPuertoDelServidor;
        qDebug()<<mDireccionDelServidor;

        connectToHost(mDireccionDelServidor,mPuertoDelServidor);

        mConectado = true;
        qDebug()<<mConectado;
    }
}

bool ClienteSocket::setSocketDescriptor(qintptr socketDescriptor,
                                          QAbstractSocket::SocketState state,
                                          QIODevice::OpenMode openMode)
{
    mId = QString::number(socketDescriptor);
    return QTcpSocket::setSocketDescriptor(socketDescriptor, state, openMode);
}



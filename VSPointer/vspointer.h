#ifndef VSPOINTER_H
#define VSPOINTER_H

#include "VSPointer_global.h"
#include <QMainWindow>
#include <QtNetwork/QSctpSocket>
//#include "qtcpsocket.h"


//Clase ejecutora

class VSPOINTER_EXPORT VSPointer
{
public:
    VSPointer();
    void maini()  ;
};



//Ventana Principal


namespace Ui {
class ventana;
}

class ventana : public QMainWindow
{
    Q_OBJECT

public:
    explicit ventana(QWidget *parent = nullptr);
    ~ventana();
    void interfase();


private slots:
    void on_Conectar_clicked();

private:
    Ui::ventana *ui;
};


//cliente

//#include <QTcpSocket>

class ClienteSocket : public QTcpSocket
{
    Q_OBJECT
public:
    ClienteSocket(QObject *parent = nullptr);
    void enviaMensaje(int enumeracion, const QString &mensaje);
    void setDireccionDelServidor(const QString &ip);
    void setPuertoDelServidor(quint16 puerto);
    void conectaConElServidor();
    bool setSocketDescriptor(qintptr socketDescriptor, SocketState state = ConnectedState, OpenMode openMode = ReadWrite) override;

    QString id() const
    {
        return mId;
    }
signals:
    void mensajeRecibido(int enumeracion, const QString &mensaje, ClienteSocket *socket);
    void desconectado(ClienteSocket *socket);
private:
    QString mDireccionDelServidor;
    quint16 mPuertoDelServidor;
    bool mConectado;
    QString mId;
};



#endif // VSPOINTER_H



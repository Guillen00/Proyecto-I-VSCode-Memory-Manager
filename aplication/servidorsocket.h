/*#ifndef SERVIDORSOCKET_H
#define SERVIDORSOCKET_H

#include"VSPtr.h"
#include <QtNetwork/QSctpServer>

//#include "qtcpserver.h"
class ClienteSocket;

class ServidorSocket : public QTcpServer
{
    Q_OBJECT
public:
    ServidorSocket(QObject *parent = nullptr);
    ~ServidorSocket() override;
    void inicia();
    void setPuerto(quint16 puerto);
    QList<ClienteSocket *> clientes() const;
    void enviaMensaje(int enumeracion, const QString &mensaje, ClienteSocket *cliente);
    void eliminaCliente(ClienteSocket *socket);
    void desconectaClientes();
    QString PASSWORD;
    QString PASSWORDserver;
signals:
    void mensajeRecibido(int enumeracion, const QString &mensaje, ClienteSocket *socket);
    void clienteConectado(ClienteSocket *socket);
    void clienteDesconectado(ClienteSocket *socket);

protected:
    void incomingConnection(qintptr handle) override;
private:
    quint16 mPuerto;
    QList<ClienteSocket *> mClientes;
    ClienteSocket *makeCliente(qintptr handle);
    bool mEscuchando;


};

#endif // SERVIDORSOCKET_H
*/

#ifndef CLIENTESOCKET_H
#define CLIENTESOCKET_H


/**@Leonardo_JuanPablo
  *@data 15/06/2020
  *@brief Descripción: A continuación se describe la clase ClienteSocket la cual tiene funciones para lograr concetarse con el servidor y poder tener una
  * comunicaciòn cliente-servidor
  */

//#include <QTcpSocket>
#include "qtcpsocket.h"

/**Se incluye la libreria QTcpSocket la cual nos permite aplicar la comunicación con los sockets, también se crean varios métodos para comunicarse con el servidor
 * tales como enviarle mensajes , recibirlos o abrir un puerto para la comunicación, a su vez se definieron algunas variables que se utilizarán en otro archivo
  *
  */

class ClienteSocket : public QTcpSocket
{
    Q_OBJECT
public:
/**Se importan librerias para manejar los documentos u información de una mejor manera.
  *El método ClienteSocket inicializa las variables y busca la conección con esas condiciones
  */
    ClienteSocket(QObject *parent = nullptr);

/**Se envia mensaje desde el cliente hacia el servidor
  *
  */

    void enviaMensaje(int enumeracion, const QString &mensaje);


/**Inicializa la variable que contiene la ip para conección
  *
  */

    void setDireccionDelServidor(const QString &ip);


/**Inicializa la variable que contiene el puerto para conección
  *
  */

    void setPuertoDelServidor(quint16 puerto);

/**Realiza la conección con el servidor mandando la ip y el puerto
  *
  */

    void conectaConElServidor();

/**define la variable mId con ina variable qintptr
  *
  */

    bool setSocketDescriptor(qintptr socketDescriptor, SocketState state = ConnectedState, OpenMode openMode = ReadWrite) override;

    QString id() const
    {
        return mId;
    }
signals:

/**Se recibe un mensaje o respuesta del servidor 
  *
  */

    void mensajeRecibido(int enumeracion, const QString &mensaje, ClienteSocket *socket);

/**  Se desconecta al cliente del servidor
  *
  */

    void desconectado(ClienteSocket *socket);
private:
    QString mId;
};

#endif // CLIENTESOCKET_H

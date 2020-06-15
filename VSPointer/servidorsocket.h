#ifndef SERVIDORSOCKET_H
#define SERVIDORSOCKET_H


#ifndef SERVIDORSOCKET_H
#define SERVIDORSOCKET_H

#include"VSPtr.h"
#include <QtNetwork/QSctpServer>

/**@Leonardo_JuanPablo
  *@data 15/06/2020
  *@brief Descripción: A continuación se describe la clase ServidorSocket , la cual se utiliza como servidor recibiendo y enviando informaciòn
  */


class ClienteSocket;


/**@brief Se comparte con QTcpServer y se crean los metodos básicos para la comunicación en cliente-servidor y sobre la conección con el clinete por medio de la
 * ip y el puerto habilitado
  *
  */

class ServidorSocket : public QTcpServer
{
    Q_OBJECT
public:

/**
 * @brief ServidorSocket::ServidorSocket , Se definen las variables de escuchando que funciona para ver si esta esperando un mensaje y puerto para saber el puerto habilitado.
 * @param parent
 */
    ServidorSocket(QObject *parent = nullptr);

/**
 * @brief ServidorSocket::~ServidorSocket , al cerrar la aplicación se eliminan los clientes conectados
 */
    ~ServidorSocket() override;

/**
 * @brief ServidorSocket::inicia , se habilita el escuchando , confirmando que esta esperando menaje
 */
    void inicia();

/**
 * @brief ServidorSocket::setPuerto, cambia la variable por el puerto al cual se quiere hablitar para la conección
 * @param puerto
 */
    void setPuerto(quint16 puerto);

/**
 * @brief ServidorSocket::clientes , se crea una lista que contiene a todos los clientes conectados
 * @return
 */
    QList<ClienteSocket *> clientes() const;
/**
 * @brief ServidorSocket::enviaMensaje , envia el mensaje hacia el cliente .
 * @param enumeracion
 * @param mensaje
 * @param cliente
 */
    void enviaMensaje(int enumeracion, const QString &mensaje, ClienteSocket *cliente);
/**
 * @brief elimina el cliente
 */
    void eliminaCliente(ClienteSocket *socket);
/**
 * @brief ServidorSocket::desconectaClientes , elimina la concección de los clientes
 */
    void desconectaClientes();
    QString PASSWORD;
    QString PASSWORDserver;
/**
 * @brief Recibe mensaje del cliente 
 */
signals:
    void mensajeRecibido(int enumeracion, const QString &mensaje, ClienteSocket *socket);
/**
 * @brief Muestra el cliente conectado
 */
    void clienteConectado(ClienteSocket *socket);
/**
 * @brief ServidorSocket::clientedesconectado , elimina la concección de los clientes
 */
    void clienteDesconectado(ClienteSocket *socket);

/**
 * @brief ServidorSocket::incomingConnection , añade un nuevo cliente a la lista de clientes.
 * @param handle
 */
protected:
    void incomingConnection(qintptr handle) override;
private:
    quint16 mPuerto;
    QList<ClienteSocket *> mClientes;
/**
 * @brief ServidorSocket::makeCliente , se conecta con el cliente y espera a recibir un mensaje.
 * @param handle
 * @return
 */
    ClienteSocket *makeCliente(qintptr handle);
    bool mEscuchando;


};

#endif // SERVIDORSOCKET_H

#endif // SERVIDORSOCKET_H

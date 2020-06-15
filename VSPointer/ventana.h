#ifndef VENTANA_H
#define VENTANA_H

//#include <QMainWindow>
#include <qmainwindow.h>

/**@Leonardo_JuanPablo
  *@data 15/06/2020
  *@brief Descripción: A continuación se describe la clase ventana la cual actua como interfase del cliente y de la libreria, cuenta con la programacion para la conexion con el servidor
  */

namespace Ui {
class ventana;
}

class ClienteSocket;

class ventana : public QMainWindow
{
    Q_OBJECT

public:
/**Muestra la interfase para interactual con el usuario
  *
  */

    explicit ventana(QWidget *parent = nullptr);
/**Algunas funciones para destruir , y punteros que nos dejaran usar los metodos de la clase clientesoclet
  *, , variables que guardan la contraseña para acceder al servidor 
  */

    ~ventana() override;
    void interfase();
    ClienteSocket *mClienteSocket;
    ClienteSocket *makeSocket();
    QString Password;
    QString NewPassword;
    QString Passwordconvert(QString password);
    void insertTable();

protected:
    void closeEvent(QCloseEvent *event) override;
private slots:
    void on_Conectar_clicked();

    void on_pushButton_clicked();

private:
    Ui::ventana *ui;

};

#endif // VENTANA_H

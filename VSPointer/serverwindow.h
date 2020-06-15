#ifndef SERVERWINDOW_H
#define SERVERWINDOW_H

#include <QMainWindow>

#import "servidorsocket.h"


/**@Leonardo_JuanPablo
  *@data 15/06/2020
  *@brief Descripción: A continuación se describe la clase ServidorSocket  , la cual se encarga de comunicar y tener acceso a todas las caracteristicas de la interfase
*/

QT_BEGIN_NAMESPACE
namespace Ui {class Serverwindow;}
QT_END_NAMESPACE

//class ServidorSocket;


class Serverwindow : public QMainWindow
{
    Q_OBJECT
protected:
    void closeEvent(QCloseEvent *event) override;

public:
/**
 * @brief ServidorWidget::ServidorWidget , inicializa la interfase del servidor, deshabilita las ventanas en las cuales se mostrará conenido cundo este conectado con un cliente
 * @param parent
 */
    explicit Serverwindow(QWidget *parent = nullptr);
    ~Serverwindow();

/** Se crean las funciones slots para hacer uso de los botones de la interfase
 * Se crean metodos que hacen la coneccion con el servidor
  *
  */

private slots:
    void on_pushButton_clicked();

private:
    Ui::Serverwindow *ui;

/**
 * @brief Se crean los punteros para poder hacer uso de los metodos del sevidorsocket en esta interfase
 */

    ServidorSocket *mServidorSocket;
    ServidorSocket *makeServidor();
};

#endif // SERVERWINDOW_H

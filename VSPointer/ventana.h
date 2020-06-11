#ifndef VENTANA_H
#define VENTANA_H

#include <QMainWindow>


namespace Ui {
class ventana;
}

class ClienteSocket;

class ventana : public QMainWindow
{
    Q_OBJECT

public:
    explicit ventana(QWidget *parent = nullptr);
    ~ventana() override;
    void interfase();
    ClienteSocket *mClienteSocket;
    ClienteSocket *makeSocket();


protected:
    void closeEvent(QCloseEvent *event) override;
private slots:
    void on_Conectar_clicked();

    void on_pushButton_clicked();

private:
    Ui::ventana *ui;

};

#endif // VENTANA_H

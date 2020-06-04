#ifndef SERVERWINDOW_H
#define SERVERWINDOW_H

#include <QMainWindow>

#import "servidorsocket.h"

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
    explicit Serverwindow(QWidget *parent = nullptr);
    ~Serverwindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Serverwindow *ui;

    ServidorSocket *mServidorSocket;
    ServidorSocket *makeServidor();
};

#endif // SERVERWINDOW_H

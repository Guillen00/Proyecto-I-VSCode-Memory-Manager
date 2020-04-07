#ifndef VSPOINTER_H
#define VSPOINTER_H

#include "VSPointer_global.h"
#include <QMainWindow>

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



#endif // VSPOINTER_H



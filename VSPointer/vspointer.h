#ifndef VSPOINTER_H
#define VSPOINTER_H

#include "VSPointer_global.h"
#include <QMainWindow>

class VSPOINTER_EXPORT VSPointer
{
public:
    VSPointer();
    void maini()  ;
};


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

private:
    Ui::ventana *ui;
};

#endif // VSPOINTER_H

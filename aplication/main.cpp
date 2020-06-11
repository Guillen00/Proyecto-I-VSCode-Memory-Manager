#include "Serverwindow.h"
#include <vspointer.h>
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Serverwindow yiyi;
    ventana ven;
    yiyi.show();
    ven.show();
    return a.exec();
}



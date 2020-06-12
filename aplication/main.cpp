#include "Serverwindow.h"
#include <VSPtr.h>
#include <QApplication>
#include <VSPtr.cpp>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Serverwindow yiyi;
    ventana ven;
    //yiyi.show();
    //ven.show();
    VSPtr<int> myPtr = VSPtr<int>::New();
    VSPtr<int> myPtr2 = VSPtr<int>::New();
    *myPtr = 5;
    *myPtr = 5;
    *myPtr = 5;
    *myPtr = 5;
    *myPtr = 5;
    *myPtr = 5;
    *myPtr = 5;
    *myPtr = 5;
    *myPtr = 5;
    myPtr2 = myPtr;
    cout<<&myPtr2<<endl;
    return a.exec();
}



#ifndef VSPOINTER_H
#define VSPOINTER_H

#include "VSPtr_global.h"
//#include <QtNetwork/QSctpSocket>
#include <QtNetwork/qsctpsocket.h>
//#include <QAbstractSocket>
#include <qabstractsocket.h>
#include "ventana.h"
#include "clientesocket.h"
//#include "VSPtr.cpp"

//Clase ejecutora

#pragma once
#include <iostream>
using namespace std;

template <class T>
class VSPtr_EXPORT VSPtr
{
private:
    /**
     * Puntero interno del objeto VSPtr
     */
    T *ptr_in; //dato

    /**
     * Tipo de dato que almacenara el puntero interno
     */

    string tipodato = ""; //tipo

    /**
     * Valor asignado al puntero para identificarlo
     */
    int referenceID; //IDref


public:

    ///
    /// @brief Constructor por defecto de la clase VSPtr
    /// @author Leonardo_JuanPablo
    ///
    VSPtr();
    ///
    /// @brief Destructor de objetos VSPtr para administrar la correcta eliminación de la memoria utilizada
    /// @author Leonardo_JuanPablo
    ///
    ~VSPtr<T>();

    ///
    /// @brief Método que genera las instancias de los objetos VSPtr
    /// @author Leonardo_JuanPablo
    ///
    static VSPtr<T> New();
    ///
    /// @brief Inicializa el VSPtr, luego envía la refencia que se le ha asignado y tambien la del puntero ptr_in al Garbage Collector
    /// @author Leonardo_JuanPablo
    ///
    void start();
    ///
    /// @brief Sobrecarga el operador = y le asigna data a la dirección de memoria a la que esta apuntando el puntero ptr_in
    /// @param Dato de cualquier tipo (T)
    /// @author Leonardo_JuanPablo
    ///
    void operator =(T data);
    ///
    /// @brief Le asigna la direccion de memoria a la que apunta un puntero al segundo puntero
    /// @param Dato tipo VSPtr
    /// @author Leonardo_JuanPablo
    ///
    void operator =(VSPtr<T> *ptr);
    ///
    /// @brief Método que sobrecarga el operador & para lograr acceder al valor almacenado en el objeto VSPtr
    /// @return El valor al que apunta el puntero dato
    /// @author Leonardo_JuanPablo
    ///
    T operator &();
    ///
    /// @brief Obtiene el mismo VSPtr
    /// @return El mismo VSPtr
    /// @author Leonardo_JuanPablo
    ///
    VSPtr<T> operator *();

    ///
    /// @brief Obtiene el ID que se le ha asignado al puntero
    /// @return referenceID
    /// @author Leonardo_JuanPablo
    ///
    int obtenrefID();

     ///
    /// @brief Muestra datos del VSPtr y su puntero interno
    /// @author Leonardo_JuanPablo
    ///
void info();
};



#endif // VSPOINTER_H



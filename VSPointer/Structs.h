#ifndef STRUCTS_H
#define STRUCTS_H

#include "string"
#include "VSPtr.h"
struct VSPointers
{
    ///
    ///@brief Estructura para almacenar los datos de los punteros
    ///@author Leonardo_JuanPablo
    ///
    VSPtr<void*>* dir;
    void* dato;
    int ID;
    string tipo;

};

///
///@brief Estructura para almacenar los datos de una variable en el heap
///@author Leonardo_JuanPablo
///
struct VSData
{
    void* dir;
    int refs;
    string tipo;
};


#endif // STRUCTS_H

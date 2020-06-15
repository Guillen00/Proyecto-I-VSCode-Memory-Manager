#ifndef STRUCTS_H
#define STRUCTS_H

#include "string"
#include "VSPtr.h"

/**@Leonardo_JuanPablo
  *@data 15/06/2020
  *@brief Descripción: A continuación se describen las estructuras que nos ayudaran a manejar de mejor manera los datos dentro de la lista enlazada
  */

struct VSPointers
{
    /**
    *@brief Estructura para almacenar los datos de los punteros
    *@author Leonardo_JuanPablo
    */
    VSPtr<void*>* dir;
    void* dato;
    int ID;
    string tipo;

};

/**
**@brief Estructura para almacenar los datos de una variable en el heap
*@author Leonardo_JuanPablo
*/
struct VSData
{
    void* dir;
    int refs;
    string tipo;
};


#endif // STRUCTS_H

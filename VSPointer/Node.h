#ifndef NODE_H
#define NODE_H


#pragma once
#include <iostream>
/**@Leonardo_JuanPablo
  *@data 15/06/2020
  *@brief Descripción: A continuación se describe la Clase Nodo ligada a la clase LinkedList que guarda una referencia al nodo siguiente y el dato que guarda
  */

template<class T>
class Node
{
private:


    Node<T> *next;

public:

/**Variable tipo t
*/
    T data;
/**Nodo que contiene a data 
*/
    Node(T Data);
/**Obtiene la data del nodo
*/
    T* getData();
/**Otorga data a un nodo
*/
    void setData(T Data);
/**Obtiene el siguente nodo del seleccionado 
*/
    Node<T>* getNext();
/**Coloca un nodo delante del seleccionado
*/
    void setNext(Node<T> *Next);

};

#endif // NODE_H



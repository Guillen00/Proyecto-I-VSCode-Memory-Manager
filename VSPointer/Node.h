#ifndef NODE_H
#define NODE_H


#pragma once
#include <iostream>
///
/// \brief Clase Nodo ligada a la clase LinkedList que guarda una referencia al nodo siguiente y el dato que guarda
/// @author Leonardo_JuanPablo
///
template<class T>
class Node
{
private:


    Node<T> *next;

public:
    T data;
    Node(T Data);
    T* getData();
    void setData(T Data);
    Node<T>* getNext();
    void setNext(Node<T> *Next);

};

#endif // NODE_H

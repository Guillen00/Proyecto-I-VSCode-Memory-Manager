#ifndef LINKEDLIST_H
#define LINKEDLIST_H


#pragma once
#include "Node.cpp"

/**@Leonardo_JuanPablo
  *@data 15/06/2020
  *@brief Descripción: A continuación se describe la clase linkedlist la cual la utilizaremos para enlazar datos, insertar y obtener datos de esta lista
  */
template<class T>
class LinkedList
{

private:

    Node<T> *head;
    Node<T> *tail;
    int size;

public:
    LinkedList();

    /**
    * @brief devuelve la head del nodo
    * @return head
    */
    Node<T>* getHead();

    /**
    * @brief cambia el nodo head de la lista(es necesario ingresar un nodo)
    * @param nueva head
    */
    void setHead(Node<T> head);

    /**
    * @brief devuelve la tail de la lista
    * @return tail
    */
    Node<T>* getTail();

    /**
    * @brief cambia el nodo de la tail (Este debe ser un nodo)
    * @param nueva tail de la lista
    */
    void setTail(Node<T> tail);

    /**
    * @brief Devuelve el tamaño de la lista
    * @return tamaño lista
    */
    int getSize();


    /**
    * @brief Método que responde si la lista esta vacía
    * @return True si la lista esta vacia, false en el caso contrario
    */
    bool isEmpty();

    /**
    * @brief Metodo encarga de insertar un nodo al inicio de la lista.
    * @param Dato de tipo T que almacenara el nuevo nodo.
    */
    void insertFirst(T data);

    /**
    * @brief Funcion qe crea un nodo a partir de los datos que se ingresen y lo ubica al final de la lista.
    * @param data Dato tipo Object que se desea que el nuevo nodo contenga.
    */
    void insertLast(T data);

    /**
    * @brief Metodo encargado de eliminar el primer nodo de la lista.
    */
    void deleteFirst();

    /**
    * @brief Metodo encargado de eliminar el ultimo nodo de la lista.
    */
    void deleteLast();

    /**
    * @brief Metodo que eliminara un elemento de la lista segun la posicion que se le de
    * @param indice
    */
    void deleteByIndex(int index);

    /**
    * @brief Metodo que buscara un nodo en la lista segun el indice que se le indique
    * @param index Indice de la lista que se quiere buscar
    * @return Nodo encontrado en la posicion indicada o Null si la lista esta vacia.
    */
    Node<T>* searchByIndex(int index);

    /**
    * Metodo que elimina el primer nodo en la lista que contenga un dato especifico.
    *
    * @param data Dato de tipo T que se desea eliminar en una posicion desconocida.
    */
    void deleteByData(T data);

    /**
    * Metodo para mostrar la lista
    *
    */
    void printList();

    /**
    * @brief mergeLinkedList Une dos listas enlazadas
    * @param toMerge es la lista que tomara posicion justo despues del ultimo elemento de la lista donde se aplica el metodo
    */
    void mergeLinkedList(LinkedList<T> toMerge);

    /**
    * @brief deleteReapeatedData Metodo que elimina todos los datos iguales o repetidos de la lista, conserva la primer repeticion
    */
    void deleteReapeatedData();

    /**
    * @brief Método para limpiar la lista
    */
    void clearList();

};
#endif // LINKEDLIST_H

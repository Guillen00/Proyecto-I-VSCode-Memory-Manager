#include "VSPtr.h"
#include <QDebug>
#include <typeindex>
#include <unordered_map>
#include <iostream>
#include <typeinfo>
#include <string>
#include <memory>
#include "GarbageCollector.cpp"
//#include "linkedlist.h"
//#include "Structs.h"

using namespace std;



template <class T>
VSPtr<T>::VSPtr(){
    ptr_in = (T*)malloc(sizeof(T*));

    std::unordered_map<std::type_index, std::string> type_names;
    type_names[std::type_index(typeid(int))] = "int";
    type_names[std::type_index(typeid(double))] = "double";
    type_names[std::type_index(typeid(char))] = "char";
    type_names[std::type_index(typeid(string))] = "string";
    type_names[std::type_index(typeid(bool))] = "bool";
    type_names[std::type_index(typeid(float))] = "float";
    type_names[std::type_index(typeid(short))] = "short";
    type_names[std::type_index(typeid(unsigned))] = "unsigned";
    string tipos[] = {"int","double","char","string","bool","float","short","unsigned"};

    tipodato = type_names[std::type_index(typeid(T))];
}

template <class T>
VSPtr<T>::~VSPtr<T>()
{
    cout << "Se ha eliminado el VSPtr con ID: " << referenceID << endl;
    GarbageCollector::clear(this, ptr_in);

}

template <class T>
VSPtr<T> VSPtr<T>::New()
{
    VSPtr<T> myPtr;
    return myPtr;
}

template <class T>
void VSPtr<T>::start()
{
    referenceID = GarbageCollector:: createID();
    GarbageCollector::newVSPtr((VSPtr<void*>*)this,ptr_in,tipodato);

}

template <class T>
void VSPtr<T>::operator =(T data)
{

    *ptr_in = data;

}


template <class T>
void VSPtr<T>::operator =(VSPtr<T>* ptr)
{

    ptr_in = ptr->ptr_in;
    referenceID = ptr->referenceID;
    GarbageCollector::newVSPtr((VSPtr<void*>*)this,ptr_in,tipodato);
}

template <class T>
T VSPtr<T>::operator &()
{
    return *ptr_in;
}

template <class T>
VSPtr<T> VSPtr<T>::operator *()
{
    return *this;

}

template <class T>
int VSPtr<T>::obtenrefID()
{
    return referenceID;
}

template <class T>
void VSPtr<T>::info()
{

    cout << "Dato almacenado: " << *ptr_in << endl;
    cout << "Espacio del puntero: " << &ptr_in << endl;
    cout << "Espacio del numero: " << ptr_in << endl;
    cout << "Espacio del VSPtr: " << this << endl;
    cout << "ID del VSPtr: " << obtenrefID()<< endl;

}




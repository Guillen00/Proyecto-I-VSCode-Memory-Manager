#ifndef GARBAGECOLLECTOR_H
#define GARBAGECOLLECTOR_H


#pragma once
#include "linkedlist.cpp"
#include "Structs.h"
//#include "QThread"
#include "qthread.h"

/**
* @brief Clase Singleton que funciona como un Garbage Collector que se encarga de administrar la memoria del programa autom�ticamente
* @author Leonardo_JuanPablo
*/
class GarbageCollector :public QThread{

public:

    /**@brief Metodo encargado de activar el thread de la clase
      *@author Leonardo_JuanPablo
      *
      */
    /// 
    static void activateGC();//GCinit
    /**@brief Metodo que inicializa la clase aplicando singleton o devuelve la instancia ya existente
      *@author Leonardo_JuanPablo
      *
      *
      */
    
    static GarbageCollector* getInstance();
/**
     *@brief Metodo que ejecutada cada vez que se crea un nuevo VSPtr
     *@param Direccion de memoria del objeto VSPtr
     *@author Leonardo_JuanPablo
   
      *
      *
      */
    
    template <class T>
    static void newVSPtr (VSPtr<T>*,void*,string); //newPtr
/**@author Leonardo_JuanPablo
      *@brief Metodo encargado de crear el ID que se le asigna a un nuevo VSPtr
      *
      */
   
    static int createID(); //generateID
/**@brief Metodo que se ejecuta cada vez que se elimina un VSPtr
      *@param La direccion de memoria de donde se almacena el VSPtr
      * @author Leonardo_JuanPablo
      */
   
    template <class T>
    static void clear(VSPtr<T>*, void*); //clear

    GarbageCollector(const GarbageCollector&) = delete;

    LinkedList<VSPointers> VSptrs;

    LinkedList<VSData> Data;
/**@brief Constructor por defecto de la clase Garbage Collector
      *@author Leonardo_JuanPablo
      *
      */
    
    GarbageCollector();
private:




    int referenceID; //IDref

    bool state = false;


/**@brief Implemetacion de activateGC
      *@author Leonardo_JuanPablo
      *
      */
    
    static void activeGCImple();//initGCImp
/** @brief Metodo que inicializa el servidor
      *@author Leonardo_JuanPablo
      *
      */
    
    static void initServer();//start server

/**@brief Metodo que toma los datos guardados en el Garbage Collector y los reestructura para enviarlos a la extension
      * @return Un string con los datos de cada una de las varibles almacenadas
      *@author Leonardo_JuanPablo
      */
    
    static string sendingdata(); //datatosend
/**@brief Metodo que que extrae los datos de los punteros almacenados y luego los convierte a JSON
      *@return string JSON con los datos de los VSptr
      *@author Leonardo_JuanPablo
      */
    
    static string convertJson();//toJson
/**@brief Metodo ejecutado en el thread, que busca los VSPtr que tengan referencia 0
      *@author Leonardo_JuanPablo
      *
      */
    
    static void findref0(); //inspect
/**@brief Implementacion de newVSPtr
      *@author Leonardo_JuanPablo
      *
      */
    
    template <class T>
    static void newVSPtrImple (VSPtr<T>*,void*,string);//newPtrImp
/**@brief Implemetacion de refresh
      *@author Leonardo_JuanPablo
      *
      */
    
    template <typename T>
    static void refreshImple (T*,T*);//updateImp
/**@brief Implemetacion de createID
      *@author Leonardo_JuanPablo
      *
      */
    
    static int createIDImple();//generateIDImp
/**@brief Implemetacion de clear
      *@author Leonardo_JuanPablo
      *
      */
    
    template <class T>
    static void clearImple(VSPtr<T>* VSDir,void* TDir);//ClearImp
/**@brief Metodo que ingresa en la lista enlazada para buscar los datos del VSPtr cuya direccion de memoria coincida con su referenceID
      *@param Direccion de memoria de un VSPtr
      *@return Arreglo con los respectivos datos del VSPtr encontrado
      *@author Leonardo_JuanPablo
    */
    static VSData* searchInList(void*);//search in data


    static int searchInVSPtrs(void*);//searchInPtrs


};

#endif // GARBAGECOLLECTOR_H

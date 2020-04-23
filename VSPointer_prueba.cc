#include <iostream>
#include <stdlib.h>
using namespace std;

template <class T>//Plantilla a utilizar (T)

class VSPtr{ //Clase vsptr

   public:

      VSPtr(T) {} //Constructor de la clase VSPtr

      // constructror parametrizado
      VSPtr(T* P) : pointer(P) {}

      VSPtr<T> operator *();

      VSPtr<T> operator &();
      
      VSPtr<T>& operator =(const VSPtr<T>&);

      VSPtr<T> operator =(const T);

      static T New();//Metodo new 

      ~VSPtr(); //destructor de la clase VSPtr
      void puntero();

   private:
     T *pointer; //Atributo de tipo T puntero
};

template <class T>
VSPtr<T> VSPtr<T>::operator *() {

   return this->pointer;



//Hay que sobrecargar el operador * para almacenar el valor en el espacio reservado para el

};

template <class T>
VSPtr<T> VSPtr<T>::operator &() {

   return this->pointer;

 //Hay que sobrecargar el operador & para obtener el valo guardado
};

template <class T>
VSPtr<T>& VSPtr<T>::operator =(const VSPtr<T> &p1) {

   if (this == &p1 ){

      this = p1.pointer;

      //copia el puntero y el id de VSPointer dentro del Garbage Collector 

   }

//Hay que hacer una posible sobrecarga para el =, o si no crear un metodo para condicionar su uso
};

template <class T>
VSPtr<T> VSPtr<T>::operator =(T tipo) {

  // if (sizeof(this->pointer) == sizeof(tipo)){

      this->pointer = &tipo;

      //copia el puntero y el id de VSPointer dentro del Garbage Collector 

   //}

//Hay que hacer una posible sobrecarga para el =, o si no crear un metodo para condicionar su uso
};


template <class T>
VSPtr<T>::~VSPtr(){

  //El destructor de VSPtr debe llamar al Garbage Collector para indicar que la referencia se ha destruido.  

} 

//template <class T>
//VSPtr<T>::VSPtr(T p){

    //pointer=p;
    
//} 

template <class T>
T VSPtr<T>::New(){

 T *ptr;
ptr = (T*)malloc(sizeof(T));

return *ptr;
//Hay que redervar la memoria para el dato a usar ,para un int por ejemplo

// Cada vez que se llama el método New de VSPointer, se guarda la dirección de memoria de la instancia de 
//VSPointer dentro de la clase del Garbage Collector.     
    
// El destructor de VSPtr llama al Garbage Collector para indicar que la referencia se ha destruido.
}



int main(){

VSPtr<int> myPtr = VSPtr<int>::New();


int a=4;
   *myPtr=5;
    

   cout <<"Sirve"<< endl;


   //int valor = &myPtr;

  // cout <<*myPtr << " + " << " = "  << endl;
   
    return 0;
}

//Templates,plantillas o clases genericas
//sobrecarga de operadores
//
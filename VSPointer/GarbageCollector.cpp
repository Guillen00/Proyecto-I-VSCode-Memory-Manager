#include "GarbageCollector.h"

#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <future>
#include <typeinfo>
#include <vector>
//#include <sys/socket.h>
//#include <sys/types.h>
//#include <netdb.h>
//#include <arpa/inet.h>
//#include <string.h>
#include <string>
#include <stdio.h>

//#include <limits.h>



std::vector<std::future<void>> thread_1;
std::vector<std::future<void>> thread_2;

GarbageCollector :: GarbageCollector(){
    referenceID = 0;
}

void GarbageCollector :: activateGC(){
    if (getInstance()->state == false){
        getInstance()->activeGCImple();
        getInstance()->state = true;
    }
}

void GarbageCollector :: activeGCImple(){

    thread_1.push_back(std::async(std::launch::async,findref0));
    thread_2.push_back(std::async(std::launch::async,initServer));
    std::cout<<"Garbage Collector is active"<<std::endl;
}

void GarbageCollector :: initServer(){
   /*
    //Creacion del socket para el servidor
    int server_sock = socket(AF_INET, SOCK_STREAM, 0);
    if (server_sock == -1){
        cerr << "Falla en la creacion del socket";
        //return -1;
    }
    // Ligar (bind) a un puerto o IP
    sockaddr_in hint;
    hint.sin_family = AF_INET;
    hint.sin_port = htons(54000); //host to network short
    inet_pton(AF_INET,"0.0.0.0",&hint.sin_addr);

    if (bind(server_sock,(sockaddr*) &hint, sizeof(hint)) == -1){
         cerr << "Error al conectar a IP/puerto" <<endl;
         //return -2;
    }


    // Se habilta el socket para que escuche
    if(listen(server_sock, SOMAXCONN) == -1){
        cerr << "Not server_sock" ;
    }

    // Aceptar llamadas
    sockaddr_in client;
    socklen_t clientSize = sizeof(client);
    char host [NI_MAXHOST];
    char svc[NI_MAXSERV];

    int clt_socket = accept(server_sock,(sockaddr*)&client,&clientSize);

    if (clt_socket == -1) {
        cerr << "Se estan presentando problemas con el cliente";
    } else{
        cout << "Se ha establecido con exito la conexion con el cliente!\n";
    }


    char buffer [4096] = {0};

    while (true){
        memset(buffer,0,4096);
        int bytesRecv = read(clt_socket,buffer,4096);
        if (bytesRecv == -1){
            cerr << "Se ha presentado un error de conexion" << endl;
            break;
        }

        if (bytesRecv == 0){
            cout << "Cliente desconectado" << endl;
            break;
        }
        cout << buffer[0] << endl; //imprime el mensaje recibido


        if ((int)buffer[0] - 48 == 1){

            string res = sendingdata();

            send(clt_socket,res.c_str(),res.size(), 0 );

        }else if((int)buffer[0] - 48 == 2){

            string res = convertJson();

            send(clt_socket,res.c_str(),res.size(), 0 );

        }else{
            send(clt_socket,"ERROR",5, 0 );
        }

    }

    close(clt_socket);
    close(server_sock);
    initServer();*/
}

//solo cambio al nombre del metodo
string GarbageCollector :: sendingdata(){
    string tipo;
    string valor;
    string dir;
    string ref;
    string info;

    if (getInstance()->Data.getHead() != 0 ){
        for(int i = 0; i < getInstance()->Data.getSize(); i++){

            VSData* dato = getInstance()->Data.searchByIndex(i)->getData();
            tipo = dato->tipo;
            dir = to_string((long)dato->dir);
            ref = to_string(dato->refs);

            if (tipo == "int")
                valor = to_string((*(int*)dato->dir));
            else if(tipo == "double")
                valor = to_string((*(double*)dato->dir));
            else if(tipo == "char")
                valor = to_string((*(char*)dato->dir));
            else if(tipo == "string")
                valor = (*(string*)dato->dir);
            else if(tipo == "bool")
                valor = to_string((*(bool*)dato->dir));
            else if(tipo == "float")
                valor = to_string((*(float*)dato->dir));
            else if(tipo == "short")
                valor = to_string((*(short*)dato->dir));
            else if(tipo == "unsingned")
                valor = to_string((*(unsigned*)dato->dir));
            else{
                valor = "object";
            }
            info = info + tipo + "," + valor + "," + dir + "," + ref+";";
        }
        return info;
    }
    return "vacio";

}
//solo cambio al nombre del metodo
string GarbageCollector :: convertJson(){
    string json = "{\n";
    for(int i = 0; i < getInstance()->VSptrs.getSize(); i++){
        VSPointers* pointer = getInstance()->VSptrs.searchByIndex(i)->getData();

        string tipo = pointer->tipo;
        string ID = to_string( pointer->ID);

        string valor;
        if (tipo == "int")
                valor = to_string((*(int*)pointer->dato));
            else if(tipo == "double")
                valor = to_string((*(double*)pointer->dato));
            else if(tipo == "char")
                valor = to_string((*(char*)pointer->dato));
            else if(tipo == "string")
                valor = (*(string*)pointer->dato);
            else if(tipo == "bool")
                valor = to_string((*(bool*)pointer->dato));
            else if(tipo == "float")
                valor = to_string((*(float*)pointer->dato));
            else if(tipo == "short")
                valor = to_string((*(short*)pointer->dato));
            else if(tipo == "unsigned")
                valor = to_string((*(unsigned*)pointer->dato));
            else{
                valor = "object";
            }

            string type = "tipo";
            string value = "valor";
            string id = "id";

        //json = json + '"' + type + '"'+  ":" + '"' + tipo + '"'+","+ "\n" +'"' + value + '"'+  ":" + '"' + valor + '"'+","+ "\n" + '"' + id + '"' +  ":" + '"' + ID + '"'+ "\n},\n"  ;
        json = json + type +  ":" + tipo +","+ "\n" + value +  ":"  + valor +","+ "\n" + id +  ":"  + ID + "\n},\n"  ;
    }
    if(!json.empty()){
        return json.substr(0,json.size()-2);
    }else{
        return "error";
    }

}


void GarbageCollector :: findref0(){

    while(true){
        sleep(2);
        std::cout<<"buscando VSPtrs..."<<std::endl;

        if (getInstance()->Data.getHead() != 0 ){
            for(int i = 0; i < getInstance()->Data.getSize(); i++){
                VSData* dato = getInstance()->Data.searchByIndex(i)->getData();
                if ( dato->refs  <= 0){
                    delete((decltype(dato->dir)*)dato->dir);
                    getInstance()->Data.deleteByIndex(i);
                    i--;
                    std::cout<<"Garbage collector ha eliminado un puntero sin referencia"<<std::endl;
                }
            }
        }
    }
}

GarbageCollector* GarbageCollector :: getInstance(){
    static GarbageCollector instance;
    return &instance;
}

template <class T>
void GarbageCollector :: newVSPtr(VSPtr<T>* VSPtrDir,void* datoTDir,string tipodato){
    getInstance()->newVSPtrImple(VSPtrDir,datoTDir,tipodato);
}

template <class T>
void GarbageCollector :: newVSPtrImple(VSPtr<T>* VSPtrDir,void* datoTDir,string tipodato){

    VSPointers Pointer;
    Pointer.dir = VSPtrDir;
    Pointer.ID = (VSPtrDir)->obtenrefID();
    Pointer.tipo = tipodato;
    Pointer.dato = datoTDir;
    getInstance()->VSptrs.insertFirst(Pointer);
    std::cout<< "Se ha agregado un nuevo puntero en el Garbage Collector"<<std::endl;

    VSData* PtrData = searchInList(datoTDir);
    if (PtrData == NULL){
        std::cout<< "New variable added in GC"<<std::endl;
        VSData NVariable;
        NVariable.dir = datoTDir;
        NVariable.refs = 1;
        NVariable.tipo = tipodato;
        getInstance()->Data.insertFirst(NVariable);
    }else{
        PtrData->refs++;
        std::cout<< "Las referencias activas de: "<<PtrData->dir << " aumentaron a: "<< PtrData->refs<< std::endl;
    }
}

int GarbageCollector :: createID(){
    int ID = getInstance()->referenceID;
    getInstance()->referenceID++;
    std::cout<< "El ID autogenerado es: "<< ID <<std::endl;
    return ID;
}

template <class T>
void GarbageCollector :: clear(VSPtr<T>* VSPtrDir,void* datoTDir){
    getInstance()->clearImple(VSPtrDir,datoTDir);
    //-------------------------------------------------------------------------------------------------------------------------------
}

template <class T>
void GarbageCollector :: clearImple(VSPtr<T>* VSPTrDir,void* datoTDir){

    //Borra el vsptr de la lista de VsPtrs
    int PtrDataPos = searchInVSPtrs(VSPTrDir);
    std::cout<<PtrDataPos<<std::endl;
    if (PtrDataPos > 0){
        (getInstance()->VSptrs).deleteByIndex(PtrDataPos);
        std::cout<<"Se ha eliminado con exito el VSPtr en el Garbage Collector"<<std::endl;
        //Decremento de referencias para el dato
        std::cout<<"pt1"<<std::endl;

        VSData* PtrtoData = searchInList(datoTDir);
        std::cout<<PtrtoData<<std::endl;

        PtrtoData->refs--;
        std::cout<< "Referencias activas de: "<<PtrtoData->dir << " reducidas a: "<< PtrtoData->refs<< std::endl;

    }else{
        std::cout<<"No se ha encontrado el VSPtr a eliminar"<<std::endl;



}}
//sin modificacion aun
 VSData* GarbageCollector :: searchInList(void* ref){
    //LinkedList<VSData>* list = &(getInstance()->Data);
    if (getInstance()->Data.getHead() != 0 ){
        for(int i = 0; i < getInstance()->Data.getSize(); i++){
            VSData* data = getInstance()->Data.searchByIndex(i)->getData();
            if ( data->dir == ref){
                return getInstance()->Data.searchByIndex(i)->getData();
            }
        }
        return NULL;
    }
    return NULL;
}
//sin modificacion aun
int GarbageCollector :: searchInVSPtrs(void* ref){
    if (getInstance()->VSptrs.getHead() != 0 ){
        for(int i = 0; i < getInstance()->VSptrs.getSize(); i++){
            VSPointers* pointer = getInstance()->VSptrs.searchByIndex(i)->getData();
            if ( pointer->dir == ref){
                return i;
            }
        }
        return -1;
    }
    return -1;
}

#include "Agenda.h"
#include "Cliente.h"

#include <iostream>
#include <string>

using namespace std;

int main(){

int opcion=1;
Agenda aux("Agenda.txt");

cout << "Bienvenido a la agenda dental" << endl;

while(opcion != 0){

    cout << "Elija una de las siguientes opciones: " << endl;

    cout << "*****************************************" << endl;
    cout << "|\tSalir :                           0\t|" << endl;
    cout << "|\tImprimir clientes por pantalla:   1\t|" << endl;
    cout << "|\tBuscar un cliente:                2\t|" << endl;
    cout << "|\tAñadir un cliente:                3\t|" << endl;
    cout << "|\tModificar un cliente:             4\t|" << endl;
    cout << "|\tBorrar un cliente:                5\t|" << endl;
    cout << "|\tMostrar los clientes favoritos    6\t|" << endl;
    cout << "|\tMostrar los clientes mas buscados 7\t|" << endl;
    cout << "|\tCrear copia de seguridad          8\t|" << endl;
    cout << "|\tRestaurar copia de seguridad      9\t|" << endl;
    cout << "****************************************" << endl << endl;


    cout << "Opción -> ";
    cin >> opcion;
    cout << endl;

    switch(opcion){

      case 0: cout << "Gracias por su visita" << endl;
              break;


      case 1: if(aux.ficheroALista()){

                aux.imprimirLista(aux.getArrayClientes());

              }else{
                cout << "Fallo al cargar fichero, reiniciando... 99%%" << endl;
              }

              break;

      case 2:
              break;

      case 3:	if(aux.insertarCliente()){
      				cout<<"Se ha introducido el cliente con exito"<<endl;
      			}else{
      				cout<<"Ya existen clientes"<<endl;
      			}
              break;

      case 4:
              break;

      case 5:
              break;

      case 6:
              break;

      case 7:
              break;

      case 8:
              break;

      case 9:
              break;

      default:  cout << "Opción no valida" << endl;



    }




}





  return 0;
}

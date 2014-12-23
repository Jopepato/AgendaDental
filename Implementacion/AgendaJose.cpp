/************************************************************
En este fichero vamos a implementar las funciones de imprimir
*************************************************************/
#include <list>
#include "Cliente.h"
//Tengo que aprender POO para poder hacer esto



using namespace std;



//Esta función imprimirá los 10 clientes mas buscado por la secretaria
std::list<Cliente> mostrarClientesMasBuscados(){
  //Esta funcion dependerá de la funcion de imprimre cliente








}

//Esta función mostrará los datos del cliente por pantalla

//Imprime cliente se beneficia de

std::list<Cliente> imprimirClientes(){

  //Pf no se hacer listas esto va a estar complicado :c

  //Ruben me hace bullying y no se que hace D:



}

//Esta función recibe un cliente de parámetro y lo imprime de forma bonita
void imprimeCliente(Clinte C){

//Declaramos unas estructuras auxiliares para facilitarnos las cosas
Direcciones dir;
Telefonos tlf;
Correos  cor;
RedesSociales redes;
int buscado;

  //Mostramos el nombre
    cout << C.getNombre <<", "<< C.getApellidos() << "\n";

  //Mostramos el dni
    cout << "-" << C.getDNI()<< "\n";

  //Mostramos las direcciones
    dir = C.getDirecciones();
    cout << "Direccion:\n";
    cout << dir.calle << ", " << dir.puerta << ", " << dir.portal
         << "\n";

  //Mostramos los telefonos

    tlf = C.getTelefonos();
    cout << "Telefonos:\n";
    cout << "- Teléfono fijo:\t" <<tlf.numeroFijo << "\n";
    cout << "- Teléfono móvil:\t" << tlf.numeroMovil1 << "\n";
    cout << "- Teléfono auxiliar:\t" << tlf.numeroMovil2 << "\n";

  //Mostramos los correos

    cor = C.getCorreos();
    cout << "Correos electrónicos:\n";
    cout << "- Gmail:\t" << cor.gmail << "\n";
    cout << "- Hotmail:\t" << cor.hotmail << "\n";
    cout << "- Yahoo:\t" << cor.yahoo << "\n";

  //Mostramos las redes sociales

    redes = C.getRedes();
    cout << "Redes sociales:\n";
    cout << "- Twitter:\t" << redes.twitter << "\n";
    cout << "- Facebook:\t" << redes.facebook << "\n";
    cout << "- Tuenti:\t" << redes.tuenti << "\n";
    cout << "- Linkedin:\t" << redes.linkedin << "\n";

  //Mostramos si el cliente es favorito

  if(C.isFavorito()){
    cout << "Favorito: Sí\n";
  }else
    cout << "Favorito: No\n";

  //Mostramos el numero de veces que se ha buscado dicho cliente

  buscado = C.getMasUsados();
  cout << "Numero de veces buscado: " << buscado << "\n";

  //Mostramos las anotaciones del cliente

  cout << C.getAnotaciones() << "\n";


}

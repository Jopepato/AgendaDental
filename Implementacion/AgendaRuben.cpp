/*
 * Agenda.cpp
 *
 *  Created on: 04/12/2014
 *      Author: i32mezar
 */

#include "Agenda.h"
#include "Cliente.h"
#include <string>
#include <iostream>
#include <list>

using namespace std;




	/****************************************************************************************


				FUNCION INSERTAR CLIENTE


	*******************************************************************************************/

	bool Agenda::insertarCliente(){

		string apellido;
		list<Cliente> aux;
		int encontrado;
		Cliente c;

		cout<<"Introduce el apellido del cliente: ";
		getline(cin, apellido);

		aux = buscarCliente(apellido);

		encontrado = imprimirListaComprobando(aux, apellido);

		if(encontrado==false){
			c = pedirDatos();
			introducirEnLista(c);
			ordenarClientes();
			return (true);
		}else{
			return (false);
		}


	}

	/***************************************************************************************************


								FUNCIONES AUXILIARES PARA INSERTAR CLIENTE

									- INTRODUCIR EN LA LISTA

												Y

									- IMPRIMIR LISTA COMPROBANDO


	**************************************************************************************************/

					void Agenda::introducirEnLista(const Cliente &c){
						arrayClientes_.push_back();
					}

					bool Agenda::imprimirListaComprobando(const list <Cliente> &aux, const string &apellido){

						list<Cliente>::iterator i;
						bool variable=false;
						int i=1;

						cout<<"CLIENTES CON APELLIDO < "<<apellido<<" >\n";
						cout<<"-----------------------------------------\n\n";

						for(i=aux.begin(); i!=aux.end(); i++){
							if((i->getApellidos())==apellido){
								cout<<i<<" ) Cliente con nombre < "<<i->getApellidos<<", "<<i->getNombre<<" > y DNI < "<<i->getDNI<<" >\n";
								variable=true;
								i++;
							}else{
								cout<<"Los clientes no tienen este apellido\n";
								variable=false;
							}
						}

						return (variable);
					}

/*******************************************************************************************************



											FUNCION BORRAR CLIENTE



*******************************************************************************************************/



	bool Agenda::borrarCliente(string apellido){

		list<Cliente> aux;
		int encontrado;
		Cliente c;
		int posicion;

		aux = buscarCliente(apellido);
		encontrado = imprimirListaComprobando(aux, apellido);

		if(encontrado==true){
			cout<<"Introduce el numero del cliente para eliminar: ";
			cin>>posicion;


		/*SEGUN LA POSICION, COGER EL CLIENTE DE AUX
		Y CON EL DNI BORRARLO EN LA LISTA GENERAL
		DESPUES PASARLO A FICHERO
		*/

		}else{

			return (false); /*NO SE ENCUENTRA EL CLIENTE O YA ESTA BORRADO*/

		}

	}

	bool Agenda::modificarCliente(string apellido){

		list<Cliente> aux;
		int encontrado;
		Cliente c;
		int posicion;

		aux = buscarCliente(apellido);
		encontrado = imprimirListaComprobando(aux, apellido);

		if(encontrado==true){
			cout<<"Introduce el numero del cliente para modificar: ";
			cin>>posicion;


		/*PEDIR DATOS, MODIFICAR EN LA LISTA AUX Y 
		MODIFICAR EN LA LISTA GENERAL CON EL DNI 
		BORRANDO EL ANTERIOR Y PONIENDO EL NUEVO*/

		}else{

			return (false); /*NO SE ENCUENTRA EL CLIENTE Y PREGUNTAR EN EL MAIN SI DESEA INTRODUCIRLO*/

		}
	}
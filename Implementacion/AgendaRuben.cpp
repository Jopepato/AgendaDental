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
						arrayClientes_.push_back(c);
					}

					bool Agenda::imprimirListaComprobando(const list <Cliente> &aux, const string &apellido){

						std::list<Cliente>::iterator i;
						bool variable=false;
						int j=1;

						cout<<"CLIENTES CON APELLIDO < "<<apellido<<" >\n";
						cout<<"-----------------------------------------\n\n";

						for(i=aux.begin(); i!=aux.end(); i++){
							if((i->getApellidos())==apellido){
								cout<<j<<" ) Cliente con nombre < "<<i->getApellidos()<<", "<<i->getNombre()<<" > y DNI < "<<i->getDni()<<" >\n";
								variable=true;
								j++;
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
			c = sacarClienteListaComprobando(aux, posicion);
			if(eliminarClienteListaComprobando(arrayClientes_, c)==true){
				return(true);
			}else{
				return(false);
			}

		/*SEGUN LA POSICION, COGER EL CLIENTE DE AUX
		Y CON EL DNI BORRARLO EN LA LISTA GENERAL
		DESPUES PASARLO A FICHERO
		*/

		}else{

			return (false); /*NO SE ENCUENTRA EL CLIENTE O YA ESTA BORRADO*/

		}

	}

						Cliente Agenda::sacarClienteListaComprobando(list <Cliente> &aux, const int &posicion){

						list<Cliente>::iterator i;
						bool variable=false;
						int j=1;
						Cliente caux;

						for(i=aux.begin(); i!=aux.end(); i++){
							if(j==posicion){
								caux = *i;
								aux.erase(i);	
							}
							j++;
						}

						return (caux);
						}

						bool Agenda::eliminarClienteListaComprobando(list <Cliente> &laux, const Cliente &caux){

							string DNI;
							DNI = caux.getDni();
							std::list<Cliente>::iterator i;
							bool variable=false;

							for(i=laux.begin(); i!=laux.end(); i++){
								if(DNI==i->getDni()){
									laux.erase(i);
									variable=true;
								}
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
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

						list<Cliente>::iterator i;
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

							return (variable);
						}

/*******************************************************************************************************



											FUNCION MODIFICAR CLIENTE



*******************************************************************************************************/


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

			c = sacarClienteListaComprobando(aux, posicion);
			if(modificarClienteListaComprobando(arrayClientes_, c)==true){
				return(true);
			}else{
				return(false);
			}

		/*PEDIR DATOS, MODIFICAR EN LA LISTA AUX Y 
		MODIFICAR EN LA LISTA GENERAL CON EL DNI 
		BORRANDO EL ANTERIOR Y PONIENDO EL NUEVO*/

		}else{
			return (false); /*NO SE ENCUENTRA EL CLIENTE Y PREGUNTAR EN EL MAIN SI DESEA INTRODUCIRLO*/
		}
	}



				bool Agenda::modificarClienteListaComprobando(list <Cliente> &laux, Cliente &caux){

							string DNI;
							DNI = caux.getDni();
							std::list<Cliente>::iterator i;
							bool variable=false;
							int opcion;

							string nombre, apellidos, DNI, anotaciones;
							char favorito;
							int opcionMenu;
							
							string calle, puerta;
							int portal;
							Direcciones direccion;
							
							string facebook;
							string twitter;
							string tuenti;
							string linkedin;
							Redes redes;
							int opcionRedes;
							
							
							string hotmail;
							string gmail;
							string yahoo;
							Correos correos;
							
							
							int numeroFijo;
							int numeroMovil1;
							int numeroMovil2;
							Telefonos telefonos;

							for(i=laux.begin(); i!=laux.end(); i++){
								if(DNI==i->getDni()){ //SI EL DNI DEL CLIENTE DE LA LISTA COINCIDE CON EL PARAMETRO DEL DNI
									do{
										cout<<"¿Que desea modificar?"<<endl;
										cout<<"1.Nombre"<<endl;
										cout<<"2.Apellidos"<<endl;
										cout<<"3.DNI"<<endl;
										cout<<"4.Anotaciones"<<endl;
										cout<<"5.Favorito"<<endl;
										cout<<"6.Redes"<<endl;
										cout<<"7.Direcciones"<<endl;
										cout<<"8.Correos"<<endl;
										cout<<"9.Telefonos"<<endl;
										cout<<"0. SALIR"<<endl;
										cout<<"Opcion: ";
										cin>>opcion;

											case 0: break;

											case 1:	cout<<"Introduce el nuevo nombre: ";
													getline(cin, nombre);
													i->setNombre(nombre);
													break;

											case 2:	cout<<"Introduce los nuevos apellidos: ";
													getline(cin, apellidos);
													i->setApellidos(apellidos);
													break;

											case 3:	cout<<"Introduce el nuevo dni: ";
													getline(cin, DNI);
													i->setDni(DNI);
													break;

											case 4:	cout<<"Introduce anotaciones: ";
													getline(cin,anotaciones);
													i->setAnotaciones(anotaciones);
													break;

											case 5:	do{
														cout<<"Introduce si es favorito (s/n): ";
														cin>>favorito;
														if(favorito=='s'){
															i->setFavorito(true);
														}

														if(favorito=='n'){
															i->setFavorito(false);
														}
													
													}while((favorito!='s')&&(favorito!='n');
													break;

											case 6:	do{
														cout<<"¿Que redes tiene?"<<endl;
														cout<<"1.Twitter"<<endl;
														cout<<"2.Facebook"<<endl;					
														cout<<"3.Tuenti"<<endl;
														cout<<"4.Linkedin"<<endl;
														cout<<"0.Salir"<<endl;
														cout<<"Opcion: ";
														cin>>opcionMenu;
														
														switch(opcionMenu){
														
															case 0: break;
														
															case 1: cout<<"Introduce usuario twitter: ";
																	cin>>twitter;
																	redes.twitter = twitter;
																	break;
																	
															case 2: cout<<"Introduce usuario facebook: ";
																	cin>>facebook;
																	redes.facebook = facebook;
																	break;
																	
															case 3: cout<<"Introduce usuario tuenti: ";
																	cin>>tuenti;
																	redes.tuenti = tuenti;
																	break;
																	
															case 4: cout<<"Introduce usuario linkedin: ";
																	cin>>linkedin;
																	redes.linkedin = linkedin;
																	break;
																	
															default: cout<<"OPCION NO VALIDA";
														}
													}while(opcionMenu!=0);
													i->setRedes(redes);
													break;

											case 7:	cout<<"Introduce calle: ";
													getline(cin, calle);
													cout<<"Introduce numero: ";
													cin>>portal;
													cout<<"Introduce puerta: ";
													cin>>puerta;
													direccion.calle=calle;
													direccion.puerta=puerta;
													direccion.portal=portal;
													i->setDirecciones(direccion);
													break;

											case 8:	do{
														cout<<"¿Cual es el correo?"<<endl;
														cout<<"1.Gmail"<<endl;
														cout<<"2.Hotmail"<<endl;					
														cout<<"3.Yahoo"<<endl;
														cout<<"0.Salir"<<endl;
														cout<<"Opcion: ";
														cin>>opcionMenu;
													
														switch(opcionMenu){
														
															case 0: break;
														
															case 1: cout<<"Introduce tu direccion: ";
																	cin>>gmail;
																	correos.gmail=gmail;
																	break;
																	
															case 2: cout<<"Introduce tu direccion: ";
																	cin>>hotmail;
																	correos.hotmail=hotmail;
																	break;
																	
															case 3: cout<<"Introduce tu direccion: ";
																	cin>>yahoo;
																	correos.yahoo=yahoo;
																	break;
																	
															default: cout<<"OPCION NO VALIDA";
																	break;
														}
													
													}while(opcionMenu!=0);
													i->setCorreos(correos);
													break;

											case 9:	do{
														cout<<"¿Numero de telefono?"<<endl;
														cout<<"1.Fijo"<<endl;
														cout<<"2.Movil1"<<endl;					
														cout<<"3.Movil2"<<endl;
														cout<<"0.Salir"<<endl;
														cout<<"Opcion: ";
														cin>>opcionMenu;
													
														switch(opcionMenu){
														
															case 0: break;
														
															case 1: cout<<"Introduce tu numero fijo: ";
																	cin>>numeroFijo;
																	telefonos.numeroFijo=numeroFijo;
																	break;
																	
															case 2: cout<<"Introduce tu movil: ";
																	cin>>numeroMovil1;
																	telefonos.numeroMovil1=numeroMovil1;
																	break;
																	
															case 3: cout<<"Introduce tu movil2: ";
																	cin>>numeroMovil2;
																	telefonos.numeroMovil2=numeroMovil2;
																	break;
																	
															default: cout<<"OPCION NO VALIDA";
																	break;
														}
					
													}while(opcionMenu!=0);
													i->setTelefonos(telefonos);
													break;



									}while(opcion!=0);
									variable=true;
								}
							}

							return (variable);
				}
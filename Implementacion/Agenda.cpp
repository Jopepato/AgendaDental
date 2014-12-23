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
#include <cstdio>

using namespace std;

Agenda::Agenda(string ficheroAgenda) {
	setNombreFichero(ficheroAgenda);
}

/*********





									FUNCION PEDIR DATOS








**********/

	Cliente Agenda::pedirDatos(){
		
		
		Cliente aux;
		
		string nombre, apellidos, DNI, anotaciones;
		char opcion;
		bool favorito;
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
		
		
		cout<<"Introduce el nombre: ";
		getline(cin, nombre);
		cout<<"Introduce los apellidos: ";
		getline(cin, apellidos);
		cout<<"Introduce DNI: ";
		getline(cin, DNI);

		do{
			cout<<"¿Introducir direccion? (s/n): ";
			cin>>opcion;
			
			getchar();

				if(opcion=='s'){
					cout<<"Introduce calle: ";
					getline(cin, calle);
					cout<<"Introduce numero: ";
					cin>>portal;
					cout<<"Introduce puerta: ";
					cin>>puerta;
					direccion.calle=calle;
					direccion.puerta=puerta;
					direccion.portal=portal;
					
				}
		
		}while(opcion!='s'&&opcion!='n');
		
		do{
			cout<<"¿Introducir anotacion? (s/n): ";
			cin>>opcion;

			getchar();
			
				if(opcion=='s'){
					cout<<"Introduce anotacion: ";
					getline(cin, anotaciones);
				}
		
		}while(opcion!='s'&&opcion!='n');

		do{
			cout<<"¿Es favorito? (s/n): ";
			cin>>opcion;


			
				if(opcion=='s'){
					favorito=1;
				}else{
					favorito=0;
				}
		
		}while(opcion!='s'&&opcion!='n');
		
		do{
			cout<<"¿Introducir redes? (s/n): ";
			cin>>opcion;
			
				if(opcion=='s'){
					
					do{
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
								break;
					
					
					}
					
					}while(opcionMenu!=0);
					
				}
		
		}while(opcion!='s'&&opcion!='n');
		
		do{
			cout<<"¿Tienes correo? (s/n): ";
			cin>>opcion;
			
				if(opcion=='s'){
					
					do{
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
				}
		
		}while(opcion!='s'&&opcion!='n');
		
		
		do{
			cout<<"¿Tienes telefono? (s/n): ";
			cin>>opcion;
			
				if(opcion=='s'){
					
					do{
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
				}
		
		}while(opcion!='s'&&opcion!='n');

		
		
		aux.setNombre(nombre);
		aux.setApellidos(apellidos);
		aux.setDni(DNI);
		aux.setAnotaciones(anotaciones);
		aux.setFavorito(favorito);
		aux.setMasUsados(0);
		aux.setRedes(redes);
		aux.setDirecciones(direccion);
		aux.setCorreos(correos);
		aux.setTelefonos(telefonos);
		
		return (aux);
	}
	
	
/****************
 
 
 
 
 
 
 
 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 FUNCION INSERTAR CLIENTE EN LA LISTA
 
 
 
 
 
 
 
 
 
 *******************/	
/*
	bool Agenda::insertarCliente();
	bool Agenda::borrarCliente(string apellido);
	bool Agenda::modificarCliente(string apellido);
	list <Cliente> Agenda::buscarCliente(string apellido);
	bool Agenda::ordenarClientes();

	list <Cliente> Agenda::mostrarClientesMasBuscados();
	list <Cliente> Agenda::muestraFavoritos();
	list <Cliente> Agenda::imprimirClientes();

	bool Agenda::hacerCopiaSeguridad(string ficheroCopia);
	bool Agenda::restaurarCopiaSeguridad(string ficheroCopia);
*/




Agenda::~Agenda() {
	// TODO Auto-generated destructor stub
}


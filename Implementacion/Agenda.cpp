/*
 * Agenda.cpp
 *
 *  Created on: 04/12/2014
 *      Author: i32mezar
 */

#include "Agenda.h"
#include <string>
#include <iostream>

Agenda::Agenda(std::string ficheroAgenda) {
	setNombreFichero(ficheroAgenda);
}

/*********





																						FUNCION PEDIR DATOS








**********/

	Agenda::Cliente pedirDatos(){
		
		
		Cliente aux;
		
		std::string nombre, apellidos, DNI, anotaciones;
		char opcion;
		bool favorito;
		
		std::string calle, puerta;
		int portal;
		Direcciones direccion;
		
		std::string facebook;
		std::string twitter;
		std::string tuenti;
		std::string linkedin;
		Redes redes;
		int opcionRedes;
		
		
		std::string hotmail;
		std::string gmail;
		std::string yahoo;
		Correos correos;
		
		
		int numeroFijo;
		int numeroMovil1;
		int numeroMovil2;
		Telefonos telefonos;
		
		
		cout<<"Introduce el nombre: ";
		std::getline(std::cin, nombre);
		cout<<"Introduce los apellidos: ";
		std::getline(std::cin, apellidos);
		cout<<"Introduce DNI: ";
		std::getline(std::cin, DNI);
		do{
			cout<<"¿Introducir direccion? (s/n): ";
			std::getline(std::cin, opcion);
			
				if(opcion=='s'){
					cout<<"Introduce calle: ";
					std::getline(std::cin, calle);
					cout<<"Introduce numero: ";
					std::getline(std::cin, portal);
					cout<<"Introduce puerta: ";
					std::getline(std::cin, puerta);
					direccion.calle=calle;
					direccion.puerta=puerta;
					direccion.portal=portal;

				}
		
		}while(opcion!='s'||opcion!='n');
		
		do{
			cout<<"¿Introducir anotacion? (s/n): ";
			std::getline(std::cin, opcion);
			
				if(opcion=='s'){
					cout<<"Introduce anotacion: ";
					std::getline(std::cin, anotaciones);
				}
		
		}while(opcion!='s'||opcion!='n');

		do{
			cout<<"¿Es favorito? (s/n): ";
			std::getline(std::cin, opcion);
			
				if(opcion=='s'){
					favorito=1;
				}else{
					favorito=0;
				}
		
		}while(opcion!='s'||opcion!='n');
		
		do{
			cout<<"¿Introducir redes? (s/n): ";
			std::getline(std::cin, opcion);
			
				if(opcion=='s'){
					
					do{
					cout<<"¿Que redes tiene?"<<endl;
					cout<<"1.Twitter"<<endl;
					cout<<"2.Facebook"<<endl;					
					cout<<"3.Tuenti"<<endl;
					cout<<"4.Linkedin"<<endl;
					cout<<"0.Salir"
					cout<<"Opcion: ";
					cin>>opcionMenu;
					
					switch(opcionMenu){
					
						case 0: break;
					
						case 1: cout<<"Introduce usuario twitter: ";
								std::getline(std::cin, twitter);
								redes.twitter = twitter;
								break;
								
						case 2: cout<<"Introduce usuario facebook: ";
								std::getline(std::cin, facebook);
								redes.facebook = facebook;
								break;
								
						case 3: cout<<"Introduce usuario tuenti: ";
								std::getline(std::cin, tuenti);
								redes.tuenti = tuenti;
								break;
								
						case 4: cout<<"Introduce usuario linkedin: ";
								std::getline(std::cin, linkedin);
								redes.linkedin = linkedin;
								break;
								
						default: cout<<"OPCION NO VALIDA";
								break;
					
					
					}
					
					}while(opcionMenu!=0);
					
				}
		
		}while(opcion!='s'||opcion!='n');
		
		do{
			cout<<"¿Tienes correo? (s/n): ";
			std::getline(std::cin, opcion);
			
				if(opcion=='s'){
					
					do{
						cout<<"¿Cual es el correo?"<<endl;
						cout<<"1.Gmail"<<endl;
						cout<<"2.Hotmail"<<endl;					
						cout<<"3.Yahoo"<<endl;
						cout<<"0.Salir"
						cout<<"Opcion: ";
						cin>>opcionMenu;
					
						switch(opcionMenu){
						
							case 0: break;
						
							case 1: cout<<"Introduce tu direccion: ";
									std::getline(std::cin, gmail);
									correos.gmail=gmail;
									break;
									
							case 2: cout<<"Introduce tu direccion: ";
									std::getline(std::cin, hotmail);
									correos.hotmail=hotmail;
									break;
									
							case 3: cout<<"Introduce tu direccion: ";
									std::getline(std::cin, yahoo);
									correos.yahoo=yahoo;
									break;
									
							default: cout<<"OPCION NO VALIDA";
									break;
						}
					
					}while(opcionMenu!=0);
				}
		
		}while(opcion!='s'||opcion!='n');
		
		
		do{
			cout<<"¿Tienes telefono? (s/n): ";
			std::getline(std::cin, opcion);
			
				if(opcion=='s'){
					
					do{
						cout<<"¿Numero de telefono??"<<endl;
						cout<<"1.Fijo"<<endl;
						cout<<"2.Movil1"<<endl;					
						cout<<"3.Movil2"<<endl;
						cout<<"0.Salir"
						cout<<"Opcion: ";
						cin>>opcionMenu;
					
						switch(opcionMenu){
						
							case 0: break;
						
							case 1: cout<<"Introduce tu numero fijo: ";
									std::getline(std::cin, numeroFijo);
									telefonos.numeroFijo=numeroFijo;
									break;
									
							case 2: cout<<"Introduce tu movil: ";
									std::getline(std::cin, numeroMovil1);
									telefonos.numeroMovil1=numeroMovil1;
									break;
									
							case 3: cout<<"Introduce tu movil2: ";
									std::getline(std::cin, numeroMovil2);
									telefonos.numeroMovil2=numeroMovil2;
									break;
									
							default: cout<<"OPCION NO VALIDA";
									break;
						}
					
					}while(opcionMenu!=0);
				}
		
		}while(opcion!='s'||opcion!='n');

		
		
		aux.setNombre(nombre);
		aux.setApellidos(apellidos);
		aux.setDni(DNI);
		aux.setAnotaciones(anotaciones);
		aux.setFavorito(favorito);
		aux.setMasUsados(0);
		aux.setRedes(redes);
		aux.setDirecciones(direcciones);
		aux.setCorreos(correos);
		aux.setTelefonos(telefonos);
		
		return (aux);
	}
	
	
/****************
 
 
 
 
 
 
 
 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 FUNCION INSERTAR CLIENTE EN LA LISTA
 
 
 
 
 
 
 
 
 
 *******************/	

	bool Agenda::insertarCliente();
	bool Agenda::borrarCliente(std::string apellido);
	bool Agenda::modificarCliente(std::string apellido);
	std::list <Cliente> Agenda::buscarCliente(std::string apellido);
	bool Agenda::ordenarClientes();

	std::list <Cliente> Agenda::mostrarClientesMasBuscados();
	std::list <Cliente> Agenda::muestraFavoritos();
	std::list <Cliente> Agenda::imprimirClientes();

	bool Agenda::hacerCopiaSeguridad(std::string ficheroCopia);
	bool Agenda::restaurarCopiaSeguridad(std::string ficheroCopia);





Agenda::~Agenda() {
	// TODO Auto-generated destructor stub
}


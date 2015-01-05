#include "Agenda.h"
#include "Cliente.h"
#include <string>
#include <iostream>
<<<<<<< HEAD
#include <list>
#include <cstdio>
=======
#include <fstream>
#include <cstdlib>
#include <cstdio>

using namespace std;
>>>>>>> 300eb7654cba01bda0638b2b1942d39267e995bc

using namespace std;

Agenda::Agenda(string ficheroAgenda) {
	setNombreFichero(ficheroAgenda);
}

<<<<<<< HEAD
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
=======

	bool Agenda::hacerCopiaSeguridad(std::string ficheroCopia){
		char line[2000];

		ifstream fileAgenda;
		ofstream fileCopia;

		fileAgenda.open("Agenda.txt");
		if(fileAgenda.fail()){
			return false;
		}

		fileCopia.open(ficheroCopia.c_str());
		if(!(fileCopia.fail())){
			fileCopia.close();
			remove (ficheroCopia.c_str());
			fileCopia.open(ficheroCopia.c_str());
		}

		while(fileAgenda.getline(line,2000,'\n')){
			fileCopia << line <<endl;
		}

		fileAgenda.close();
		fileCopia.close();
		return true;
	}

	bool Agenda::restaurarCopiaSeguridad(std::string ficheroCopia){
		char line[2000];

		ofstream fileAgenda;
		ifstream fileCopia;
>>>>>>> 300eb7654cba01bda0638b2b1942d39267e995bc

		fileCopia.open(ficheroCopia.c_str());
		if(fileCopia.fail()){
			return false;
		}

		fileAgenda.open("Agenda.txt");
		if(!(fileAgenda.fail())){
			fileAgenda.close();
			remove ("Agenda.txt");
			fileAgenda.open("Agenda.txt");
		}

		while(fileCopia.getline(line,2000,'\n')){
			fileAgenda << line <<endl;
		}

		fileAgenda.close();
		fileCopia.close();
		return true;
	}

	bool Agenda::ficheroALista(Agenda ag){
		char line[256];
		Cliente cl;
		list <Cliente> aux;
		Redes red;
		Direcciones dir;
		Correos cor;
		Telefonos tlf;

		ifstream fileAgenda;

		fileAgenda.open("Agenda.txt");
		if(fileAgenda.fail()){
			return false;
		}

		while(fileAgenda.getline(line,256,',')){
			cl.setNombre(line);

			fileAgenda.getline(line,256,',');
			cl.setApellidos(line);

			fileAgenda.getline(line,256,',');
			cl.setDNI(line);

			fileAgenda.getline(line,256,',');
			cl.setAnotaciones(line);

			fileAgenda.getline(line,256,',');
			if(strcmp(line, "si") == 0){
				cl.setFavorito(true);
			}else{
				cl.setFavorito(false);
			}

			fileAgenda.getline(line,256,',');
			cl.setMasUsados(atoi(line.c_str()));

			fileAgenda.getline(line,256,',');
			red.twitter = line;
			fileAgenda.getline(line,256,',');
			red.facebook = line;
			fileAgenda.getline(line,256,',');
			red.tuenti = line;
			fileAgenda.getline(line,256,',');
			red.linkedin = line;
			cl.setRedes(red);

			fileAgenda.getline(line,256,',');
			dir.calle = line;
			fileAgenda.getline(line,256,',');
			dir.puerta = line;
			fileAgenda.getline(line,256,',');
			dir.portal = atoi(line.c_str());
			cl.setDirecciones(dir);

			fileAgenda.getline(line,256,',');
			cor.gmail = line;
			fileAgenda.getline(line,256,',');
			cor.hotmail = line;
			fileAgenda.getline(line,256,',');
			cor.yahoo = line;
			cl.setCorreos(cor);

			fileAgenda.getline(line,256,',');
			tlf.numeroFijo = atoi(line.c_str());
			fileAgenda.getline(line,256,',');
			tlf.numeroMovil1 = atoi(line.c_str());
			fileAgenda.getline(line,256,'\n');
			tlf.numeroMovil2 = atoi(line.c_str());
			cl.setTelefonos(tlf);

			aux.push_back(cl);
		}

		ag.setArrayClientes(aux);

		fileAgenda.close();
		return true;

	}

	bool Agenda::listaAFichero(Agenda ag){
		char line[256];
		Cliente cl;
		Redes red;
		Direcciones dir;
		Correos cor;
		Telefonos tlf;
		list <Cliente> aux;
		aux = ag.getArrayClientes();
		list <Cliente>::iterator pos;
		pos = aux.begin();

		ofstream fileAgenda;

		fileAgenda.open("Agenda.txt");
		if(!(fileAgenda.fail())){
			fileAgenda.close();
			remove ("Agenda.txt");
			fileAgenda.open("Agenda.txt");
		}

		while(pos != aux.end()){
			fileAgenda << (*pos).getNombre() << ',';
			fileAgenda << (*pos).getApellidos() << ',';
			fileAgenda << (*pos).getDNI() << ',';
			fileAgenda << (*pos).getAnotaciones() << ',';
			if((*pos).getFavorito()){
				fileAgenda << "si" << ',';
			}else{
				fileAgenda << "no" << ',';
			}
			fileAgenda << (*pos).getMasUsados() << ',';
			red = (*pos).getRedes();
			fileAgenda << red.twitter << ',';
			fileAgenda << red.facebook << ',';
			fileAgenda << red.tuenti << ',';
			fileAgenda << red.linkedin << ',';
			dir = (*pos).getDirecciones();
			fileAgenda << dir.calle << ',';
			fileAgenda << dir.puerta << ',';
			fileAgenda << dir.portal << ',';
			cor = (*pos).getCorreos():
			fileAgenda << cor.gmail << ',';
			fileAgenda << cor.hotmail << ',';
			fileAgenda << cor.yahoo << ',';
			tlf = (*pos).getTelefonos();
			fileAgenda << tlf.numeroFijo << ',';
			fileAgenda << tlf.numeroMovil1 << ',';
			fileAgenda << tlf.numeroMovil2 << '\n';

			pos++;
		}

		fileAgenda.close();
		return true;
	}

Agenda::~Agenda() {
	// TODO Auto-generated destructor stub
}

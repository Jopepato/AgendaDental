#include "Agenda.h"
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>

using namespace std;

Agenda::Agenda(std::string ficheroAgenda) {
	setNombreFichero(ficheroAgenda);
}


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
/*
	bool Agenda::ficheroALista(){
		char line[100];
		Cliente cl;
		Agenda ag("Agenda.txt");
		list <Cliente> aux;

		ifstream fileAgenda;

		fileAgenda.open("Agenda.txt");
		if(fileAgenda.fail()){
			return false;
		}

		while(fileAgenda.getline(line,100,',')){
			cl.setNombre(line);
			fileAgenda.getline(line,100,',');
			cl.setApellidos(line);
			fileAgenda.getline(line,100,',');
			cl.setDNI(line);
			fileAgenda.getline(line,100,',');
			cl.setAnotaciones(line);
			fileAgenda.getline(line,100,',');
			cl.setFavorito();
			fileAgenda.getline(line,100,',');
			cl.setMasUsados(atoi(line.c_str()));
			fileAgenda.getline(line,100,',');
			cl.setRedes();
			fileAgenda.getline(line,100,',');
			cl.setDirecciones();
			fileAgenda.getline(line,100,',');
			cl.setCorreos();
			fileAgenda.getline(line,100,',');
			cl.setTelefonos();

			aux.push_back(cl);
		}

		ag.setArrayClientes(aux);

		fileAgenda.close();
		return true;

	}

	bool Agenda::listaAFichero(){
		char line[100];
		Cliente cl;
		Agenda ag("Agenda.txt");
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
			fileAgenda << (*pos).getNombre << ',';
			fileAgenda << (*pos).getApellidos << ',';
			fileAgenda << (*pos).getDNI << ',';
			fileAgenda << (*pos).getAnotaciones << ',';
			fileAgenda << (*pos).getFavorito << ',';
			fileAgenda << (*pos).getMasUsados << ',';
			fileAgenda << (*pos).getRedes << ',';
			fileAgenda << (*pos).getDirecciones << ',';
			fileAgenda << (*pos).getCorreos << ',';
			fileAgenda << (*pos).getTelefonos << '\n';

			pos++;
		}

		fileAgenda.close();
		return true;
	}
*/
Agenda::~Agenda() {
	// TODO Auto-generated destructor stub
}

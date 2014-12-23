#include <iostream>
#include "Agenda.h"
#include "Cliente.h"
#include <string>

using namespace std;

int main (){


	Cliente aux;
	Agenda ag("Agenda.txt");
	string apellido;

	if(ag.insertarCliente()){
		cout<<"Insertado correcto"<<endl;
	}else{
		cout<<"no se inserto"<<endl;
	}


	cout<<"Introduce apellido para borrar : ";
	cin>>apellido;

	if(ag.borrarCliente(apellido)){
		cout<<"El cliente se borro"<<endl;
	}else{
		cout<<"El cliente no se borro"<<endl;
	}

	return 0;
}

#include <iostream>
#include "Agenda.h"
#include "Cliente.h"
#include <string>

using namespace std;

int main (){
	string Copia;
	Agenda ag("Agenda.txt");

	cout << "Introduce nombre de la copia \n";
	cin >> Copia;
	cout << Copia << endl;

<<<<<<< HEAD
	Cliente aux;
	Agenda ag("Agenda.txt");
	string apellido;
=======
	if(ag.hacerCopiaSeguridad(Copia)){
		cout << "Copia realizada" << endl;
	}else{
		cout << "fail" << endl;
	}
>>>>>>> 300eb7654cba01bda0638b2b1942d39267e995bc

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

#include <iostream>
#include "Agenda.h"
#include "Cliente.h"

using namespace std;

int main (){
	string Copia;
	Agenda ag("Agenda.txt");

	cout << "Introduce nombre de la copia \n";
	cin >> Copia;
	cout << Copia << endl;

	if(ag.hacerCopiaSeguridad(Copia)){
		cout << "Copia realizada" << endl;
	}else{
		cout << "fail" << endl;
	}



	return 0;
}

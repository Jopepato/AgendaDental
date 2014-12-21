#include <iostream>
#include "Agenda.h"
#include "Cliente.h"
#include <string>

using namespace std;

int main (){


	Cliente aux;
	Agenda ag("Agenda.txt");
	aux = ag.pedirDatos();



	return 0;
}

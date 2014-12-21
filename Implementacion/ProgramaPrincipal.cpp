#include <iostream>
#include "Agenda.h"
#include "Cliente.h"


int main (){


	Cliente aux;
	Agenda ag("Agenda.txt");
	aux = ag.pedirDatos();



	return 0;
}

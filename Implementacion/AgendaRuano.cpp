#include "Agenda.h"
#include "Cliente.h"

bool Agenda::ordenarClientes(){

	
	arrayClientes_.sort(funcionOrdenacion);

	return(TRUE);

}

bool funcionOrdenacion(Cliente first, Cliente second){

	string aux1,aux2;

	aux1=first.getApellidos();
	aux2=second.getApellidos();

	if(aux1>aux2){

		return(TRUE);

	}else{

		return(FALSE);

	}


}


std::list <Cliente> buscarCliente(std::string apellido){

	list <Cliente> aux;

	list <Cliente>::iterator it;

	for(it=arrayClientes_.begin();it!=arrayClientes_.end();++it){

		if(*it.getApellidos()==apellido){
			aux.push_back(*it);
		}		

	}

	return(aux);


}
<<<<<<< HEAD
/*
 * Agenda.h
 *
 *  Created on: 04/12/2014
 *      Author: i32mezar
 */

#ifndef AGENDA_H
#define AGENDA_H
=======
#ifndef AGENDA_H_
#define AGENDA_H_
>>>>>>> 300eb7654cba01bda0638b2b1942d39267e995bc

#include <list>
#include "Cliente.h"
#include <string>
#include <iostream>

 using namespace std;
class Agenda {

private:


	string nombreFichero_;
	list <Cliente> arrayClientes_;

public:
	Agenda(string ficheroAgenda);
	virtual ~Agenda();

/*
	Cliente pedirDatos();
	bool imprimirListaComprobando(const list <Cliente> &aux, const string &apellido);
	void introducirEnLista(const Cliente &c);
	bool insertarCliente();

	Cliente sacarClienteListaComprobando(list <Cliente> &aux, const int &posicion);
	bool eliminarClienteListaComprobando(list <Cliente> &laux, const Cliente &caux);
	bool borrarCliente(string apellido);

	bool modificarCliente(string apellido);
	list <Cliente> buscarCliente(string apellido);
	bool ordenarClientes();

<<<<<<< HEAD
	list <Cliente> mostrarClientesMasBuscados();
	list <Cliente> muestraFavoritos();
	list <Cliente> imprimirClientes();

	bool hacerCopiaSeguridad(string ficheroCopia);
	bool restaurarCopiaSeguridad(string ficheroCopia);

	inline const list<Cliente>& getArrayClientes() const {return arrayClientes_;};
=======
	std::list <Cliente> mostrarClientesMasBuscados();
	std::list <Cliente> muestraFavoritos();
	std::list <Cliente> imprimirClientes();
*/
	bool hacerCopiaSeguridad(std::string ficheroCopia);
	bool restaurarCopiaSeguridad(std::string ficheroCopia);

	bool ficheroALista(Agenda ag);
	bool listaAFichero(Agenda ag);

	inline const std::list<Cliente>& getArrayClientes() const {return arrayClientes_;};
>>>>>>> 300eb7654cba01bda0638b2b1942d39267e995bc

	inline void setArrayClientes(const list<Cliente>& arrayClientes) {arrayClientes_ = arrayClientes;};

	inline const string& getNombreFichero() const {return nombreFichero_;};

	inline void setNombreFichero(const string& nombreFichero) {nombreFichero_ = nombreFichero;};
};

<<<<<<< HEAD
#endif /*AGENDA_H*/
=======
#endif
>>>>>>> 300eb7654cba01bda0638b2b1942d39267e995bc

/*
 * Agenda.h
 *
 *  Created on: 04/12/2014
 *      Author: i32mezar
 */

#ifndef AGENDA_H_
#define AGENDA_H_

#include <list>

#include "Cliente.h"

class Agenda {

private:


	string nombreFichero_;
	list <Cliente> arrayClientes_;

public:
	Agenda(string ficheroAgenda);
	virtual ~Agenda();

	bool insertarCliente(Cliente c);
	bool borrarCliente(string apellido);
	bool modificarCliente(string apellido);
	list <Cliente> buscarCliente(string apellido);
	bool ordenarClientes();

	list <Cliente> mostrarClientesMasBuscados();
	list <Cliente> muestraFavoritos();
	list <Cliente> imprimirClientes();

	bool hacerCopiaSeguridad(string ficheroCopia);
	bool restaurarCopiaSeguridad(string ficheroCopia);

	inline const list<Cliente>& getArrayClientes() const {return arrayClientes_;};

	inline void setArrayClientes(const std::list<Cliente>& arrayClientes) {arrayClientes_ = arrayClientes;};

	inline const string& getNombreFichero() const {return nombreFichero_;};

	inline void setNombreFichero(const std::string& nombreFichero) {nombreFichero_ = nombreFichero;};
};

#endif /* AGENDA_H_ */

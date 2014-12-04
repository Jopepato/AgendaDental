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


	std::string nombreFichero_;
	std::list <Cliente> arrayClientes_;

public:
	Agenda(std::string ficheroAgenda);
	virtual ~Agenda();

	bool insertarCliente(Cliente c);
	bool borrarCliente(std::string apellido);
	bool modificarCliente(std::string apellido);
	std::list <Cliente> buscarCliente(std::string apellido);
	bool ordenarClientes();

	std::list <Cliente> mostrarClientesMasBuscados();
	std::list <Cliente> muestraFavoritos();
	std::list <Cliente> imprimirClientes();

	bool hacerCopiaSeguridad(std::string ficheroCopia);
	bool restaurarCopiaSeguridad(std::string ficheroCopia);

	inline const std::list<Cliente>& Agenda::getArrayClientes() const {return arrayClientes_;};

	inline void Agenda::setArrayClientes(const std::list<Cliente>& arrayClientes) {arrayClientes_ = arrayClientes;};

	inline const std::string& Agenda::getNombreFichero() const {return nombreFichero_;};

	inline void Agenda::setNombreFichero(const std::string& nombreFichero) {nombreFichero_ = nombreFichero;};
};

#endif /* AGENDA_H_ */

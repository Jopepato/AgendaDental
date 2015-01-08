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


using namespace std;

class Agenda {

private:


	std::string nombreFichero_;
	std::list <Cliente> arrayClientes_;

public:
	Agenda(std::string ficheroAgenda);
	virtual ~Agenda();


	bool insertarCliente();
	void introducirEnLista(const Cliente &c);
	bool imprimirListaComprobando(const list <Cliente> &aux, const string &apellido);

	bool borrarCliente(std::string apellido);
	Cliente sacarClienteListaComprobando(list <Cliente> &aux, const int &posicion);
	bool eliminarClienteListaComprobando(list <Cliente> &laux, const Cliente &caux);

	bool modificarCliente(std::string apellido);
	bool modificarClienteListaComprobando(list <Cliente> &laux, Cliente &caux);



	std::list <Cliente> buscarCliente(std::string apellido);
	bool ordenarClientes();
	bool funcionOrdenacion(Cliente first, Cliente second);

	std::list <Cliente> mostrarClientesMasBuscados();
	std::list <Cliente> muestraFavoritos();
	void imprimirLista(list<Cliente> Lista);
	void imprimeCliente(Cliente C);

	bool hacerCopiaSeguridad(std::string ficheroCopia);
	bool restaurarCopiaSeguridad(std::string ficheroCopia);

	inline const std::list<Cliente>& getArrayClientes() const {return arrayClientes_;};

	inline void setArrayClientes(const std::list<Cliente>& arrayClientes) {arrayClientes_ = arrayClientes;};

	inline const std::string& getNombreFichero() const {return nombreFichero_;};

	inline void setNombreFichero(const std::string& nombreFichero) {nombreFichero_ = nombreFichero;};

	bool ficheroALista();
	bool listaAFichero();
};

#endif /* AGENDA_H_ */

/*
 * Agenda.h
 *
 *  Created on: 04/12/2014
 *      Author: i32mezar
 */

#ifndef AGENDA_H_
#define AGENDA_H_


#include "Cliente.h"


using namespace std;
class Agenda {

private:


	string nombreFichero_;
	list <Cliente> arrayClientes_;

public:
	Agenda(string ficheroAgenda);
	virtual ~Agenda();


	bool insertarCliente();
	void introducirEnLista(const Cliente &c);
	bool imprimirListaComprobando(const list <Cliente> &aux, const string &apellido);

	bool borrarCliente(string apellido);
	Cliente sacarClienteListaComprobando(list <Cliente> &aux, const int &posicion);
	bool eliminarClienteListaComprobando(list <Cliente> &laux, const Cliente &caux);

	bool modificarCliente(string apellido);
	bool modificarClienteListaComprobando(list <Cliente> &laux, Cliente &caux);



	list <Cliente> buscarCliente(string apellido);
	bool ordenarClientes();
	bool funcionOrdenacion(Cliente first, Cliente second);

	list <Cliente> mostrarClientesMasBuscados();
	list <Cliente> muestraFavoritos();
	void imprimirLista(list<Cliente> Lista);
	void imprimeCliente(Cliente C);

	bool hacerCopiaSeguridad(string ficheroCopia);
	bool restaurarCopiaSeguridad(string ficheroCopia);

	inline const list<Cliente>& getArrayClientes() const {return arrayClientes_;};

	inline void setArrayClientes(const list<Cliente>& arrayClientes) {arrayClientes_ = arrayClientes;};

	inline const string& getNombreFichero() const {return nombreFichero_;};

	inline void setNombreFichero(const string& nombreFichero) {nombreFichero_ = nombreFichero;};

	bool ficheroALista();
	bool listaAFichero();
};

#endif /* AGENDA_H_ */

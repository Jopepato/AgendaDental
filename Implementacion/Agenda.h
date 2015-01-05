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

/*
	Cliente pedirDatos();
	bool insertarCliente();
	bool borrarCliente(std::string apellido);
	bool modificarCliente(std::string apellido);
	std::list <Cliente> buscarCliente(std::string apellido);
	bool ordenarClientes();

	std::list <Cliente> mostrarClientesMasBuscados();
	std::list <Cliente> muestraFavoritos();
	std::list <Cliente> imprimirClientes();
*/
	bool hacerCopiaSeguridad(std::string ficheroCopia);
	bool restaurarCopiaSeguridad(std::string ficheroCopia);

	bool ficheroALista(Agenda ag);
	bool listaAFichero(Agenda ag);

	inline const std::list<Cliente>& getArrayClientes() const {return arrayClientes_;};

	inline void setArrayClientes(const std::list<Cliente>& arrayClientes) {arrayClientes_ = arrayClientes;};

	inline const std::string& getNombreFichero() const {return nombreFichero_;};

	inline void setNombreFichero(const std::string& nombreFichero) {nombreFichero_ = nombreFichero;};
};

#endif

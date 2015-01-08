/*
 * Cliente.h
 *
 *  Created on: 04/12/2014
 *      Author: i32mezar
 */

#ifndef CLIENTE_H_
#define CLIENTE_H_

#include <string>
#include <iostream>

 using namespace std;

typedef struct Telefonos{
	string numeroFijo;
	string numeroMovil1;
	string numeroMovil2;
}Telefonos;

typedef struct Correos{
	string hotmail;
	string gmail;
	string yahoo;
}Correos;

typedef struct Direcciones{
	string calle;
	string puerta;
	string portal;

}Direcciones;

typedef struct RedesSociales{

	string facebook;
	string twitter;
	string tuenti;
	string linkedin;

}Redes;


class Cliente {

private:
	string nombre_;
	string apellidos_;
	string DNI_;
	string anotaciones_;
	bool favorito_;
	int masUsados_;
	Redes redes_;
	Direcciones direcciones_;
	Correos correos_;
	Telefonos telefonos_;



public:
	Cliente(string nombre, string apellidos, string DNI, string anotaciones, bool favorito, int masUsados, Redes redes, Direcciones direcciones, Correos correos, Telefonos telefonos);
	Cliente();
	virtual ~Cliente();


	const string& getAnotaciones() const;
	void setAnotaciones(const string& anotaciones);

	const string& getApellidos() const;
	void setApellidos(const string& apellidos);

	const Correos& getCorreos() const;
	void setCorreos(const Correos& correos);

	const Direcciones& getDirecciones() const;
	void setDirecciones(const Direcciones& direcciones);

	const string& getDni() const;
	void setDni(const string& dni);

	bool getFavorito() const;
	void setFavorito(bool favorito);

	int getMasUsados() const;
	void setMasUsados(int masUsados);

	const string& getNombre() const;
	void setNombre(const string& nombre);

	const Redes& getRedes() const;
	void setRedes(const Redes& redes);

	const Telefonos& getTelefonos() const;
	void setTelefonos(const Telefonos& telefonos);
};

#endif /* CLIENTE_H_ */

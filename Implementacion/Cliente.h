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
	int numeroFijo;
	int numeroMovil1;
	int numeroMovil2;
}Telefonos;

typedef struct Correos{
	std::string hotmail;
	std::string gmail;
	std::string yahoo;
}Correos;

typedef struct Direcciones{
	std::string calle;
	std::string puerta;
	int portal;

}Direcciones;

typedef struct RedesSociales{

	std::string facebook;
	std::string twitter;
	std::string tuenti;
	std::string linkedin;

}Redes;


class Cliente {

private:
	std::string nombre_;
	std::string apellidos_;
	std::string DNI_;
	std::string anotaciones_;
	bool favorito_;
	int masUsados_;
	Redes redes_;
	Direcciones direcciones_;
	Correos correos_;
	Telefonos telefonos_;



public:
	Cliente(std::string nombre, std::string apellidos, std::string DNI, std::string anotaciones, bool favorito, int masUsados, Redes redes, Direcciones direcciones, Correos correos, Telefonos telefonos);
	Cliente();
	virtual ~Cliente();


	const std::string& getAnotaciones() const;
	void setAnotaciones(const std::string& anotaciones);

	const std::string& getApellidos() const;
	void setApellidos(const std::string& apellidos);

	const Correos& getCorreos() const;
	void setCorreos(const Correos& correos);

	const Direcciones& getDirecciones() const;
	void setDirecciones(const Direcciones& direcciones);

	const std::string& getDni() const;
	void setDni(const std::string& dni);

	bool getFavorito() const;
	void setFavorito(bool favorito);

	int getMasUsados() const;
	void setMasUsados(int masUsados);

	const std::string& getNombre() const;
	void setNombre(const std::string& nombre);

	const Redes& getRedes() const;
	void setRedes(const Redes& redes);

	const Telefonos& getTelefonos() const;
	void setTelefonos(const Telefonos& telefonos);
};

#endif /* CLIENTE_H_ */

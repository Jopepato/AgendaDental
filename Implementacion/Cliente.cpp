/*
 * Cliente.cpp
 *
 *  Created on: 04/12/2014
 *      Author: i32mezar
 */

#include "Cliente.h"

Cliente::Cliente() {
	setFavorito(false);
	setMasUsados(0);

}

Cliente::Cliente(std::string nombre, std::string apellidos, std::string DNI,	std::string anotaciones, bool favorito, int masUsados, Redes redes, Direcciones direcciones, Correos correos, Telefonos telefonos){
	setNombre(nombre);
	setApellidos(apellidos);
	setDni(DNI);
	setAnotaciones(anotaciones);
	setFavorito(favorito);
	setMasUsados(masUsados);
	setRedes(redes);
	setDirecciones(direcciones);
	setCorreos(correos);
	setTelefonos(telefonos);
}




Cliente::~Cliente() {
	// NA PAE
}

const std::string& Cliente::getAnotaciones() const {
	return anotaciones_;
}

void Cliente::setAnotaciones(const std::string& anotaciones) {
	anotaciones_ = anotaciones;
}

const std::string& Cliente::getApellidos() const {
	return apellidos_;
}

void Cliente::setApellidos(const std::string& apellidos) {
	apellidos_ = apellidos;
}

const Correos& Cliente::getCorreos() const {
	return correos_;
}

void Cliente::setCorreos(const Correos& correos) {
	correos_ = correos;
}

const Direcciones& Cliente::getDirecciones() const {
	return direcciones_;
}

void Cliente::setDirecciones(const Direcciones& direcciones) {
	direcciones_ = direcciones;
}

const std::string& Cliente::getDni() const {
	return DNI_;
}

void Cliente::setDni(const std::string& dni) {
	DNI_ = dni;
}

bool Cliente::isFavorito() const {
	return favorito_;
}

void Cliente::setFavorito(bool favorito) {
	favorito_ = favorito;
}

int Cliente::getMasUsados() const {
	return masUsados_;
}

void Cliente::setMasUsados(int masUsados) {
	masUsados_ = masUsados;
}

const std::string& Cliente::getNombre() const {
	return nombre_;
}

void Cliente::setNombre(const std::string& nombre) {
	nombre_ = nombre;
}

const Redes& Cliente::getRedes() const {
	return redes_;
}

void Cliente::setRedes(const Redes& redes) {
	redes_ = redes;
}

const Telefonos& Cliente::getTelefonos() const {
	return telefonos_;
}

void Cliente::setTelefonos(const Telefonos& telefonos) {
	telefonos_ = telefonos;
}






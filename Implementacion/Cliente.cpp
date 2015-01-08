/*
 * Cliente.cpp
 *
 *  Created on: 04/12/2014
 *      Author: i32mezar
 */

#include "Cliente.h"
#include <string>

using namespace std;

Cliente::Cliente() {
	setFavorito(false);
	setMasUsados(0);

}

Cliente::Cliente(string nombre, string apellidos, string DNI,	string anotaciones, bool favorito, int masUsados, Redes redes, Direcciones direcciones, Correos correos, Telefonos telefonos){
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
	// NA
}

const string& Cliente::getAnotaciones() const {
	return anotaciones_;
}

void Cliente::setAnotaciones(const string& anotaciones) {
	anotaciones_ = anotaciones;
}

const string& Cliente::getApellidos() const {
	return apellidos_;
}

void Cliente::setApellidos(const string& apellidos) {
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

const string& Cliente::getDni() const {
	return DNI_;
}

void Cliente::setDni(const string& dni) {
	DNI_ = dni;
}

bool Cliente::getFavorito() const {
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

const string& Cliente::getNombre() const {
	return nombre_;
}

void Cliente::setNombre(const string& nombre) {
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






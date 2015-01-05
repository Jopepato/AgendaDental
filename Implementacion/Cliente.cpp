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


const string& Cliente::getAnotaciones() const {
	return anotaciones_;
}

void Cliente::setAnotaciones( string anotaciones) {
	anotaciones_ = anotaciones;
}

const string& Cliente::getApellidos() const {
	return apellidos_;
}

void Cliente::setApellidos( string apellidos) {
	apellidos_ = apellidos;
}

const Correos& Cliente::getCorreos() const {
	return correos_;
}

void Cliente::setCorreos( Correos correos) {
	correos_.hotmail = correos.hotmail;
	correos_.yahoo = correos.yahoo;
	correos_.gmail = correos.gmail;
}

const Direcciones& Cliente::getDirecciones() const {
	return direcciones_;
}

void Cliente::setDirecciones(Direcciones direcciones) {
	direcciones_.calle = direcciones.calle;
	direcciones_.puerta = direcciones.puerta;
	direcciones_.portal = direcciones.portal;
}

const string& Cliente::getDni() const {
	return DNI_;
}

void Cliente::setDni(string dni) {
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

void Cliente::setNombre(string nombre) {
	nombre_ = nombre;
}

const Redes& Cliente::getRedes() const {
	return redes_;
}

void Cliente::setRedes(Redes redes) {
	redes_.twitter = redes.twitter;
	redes_.facebook = redes.facebook;
	redes_.tuenti = redes.tuenti;
	redes_.linkedin = redes.linkedin;
}

const Telefonos& Cliente::getTelefonos() const {
	return telefonos_;
}

void Cliente::setTelefonos(Telefonos telefonos) {
	telefonos_.numeroFijo = telefonos.numeroFijo;
	telefonos_.numeroMovil1 = telefonos.numeroMovil1;
	telefonos_.numeroMovil2 = telefonos.numeroMovil2;
}

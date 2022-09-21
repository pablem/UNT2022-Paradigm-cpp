/*
 * Autor.cpp
 *
 *  Created on: 19 sept. 2022
 *      Author: Pablo
 */

#include "Autor.h"

Autor::Autor() {
	this->edad = 0;
	this->nombre = "Autor Desconocido";
	this->biografia = "Sin Bio";
}

Autor::Autor(string nomb, string descr, int edad) {
	Autor::edad= edad;
	this->nombre = nomb;
	this->biografia = descr;
}
int Autor::getEdad() const {
	return edad;
}
const string& Autor::getBiografia() const {
	return biografia;
}
const string& Autor::getNombre() const {
	return nombre;
}

//overrays
ostream & operator<<(ostream& salida, Autor *autor) {
	salida<< autor->getNombre();
	return salida;
}


/*
 * Autor.cpp
 *
 *  Created on: 19 sept. 2022
 *      Author: Pablo
 */

#include "Autor.h"

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
	salida<<"Nombre: "<<autor->getNombre()<<endl;
	salida<<"Edad: "<<autor->getEdad()<<endl;
	salida<<"Bio: "<<autor->getBiografia()<<endl;
	return salida;
}


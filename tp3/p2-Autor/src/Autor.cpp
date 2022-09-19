/*
 * Autor.cpp
 *
 *  Created on: 19 sept. 2022
 *      Author: Pablo
 */

#include "Autor.h"

Autor::Autor() {
	this->edad = 0;
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
//
//Autor::~Autor() {
//	// TODO Auto-generated destructor stub
//}


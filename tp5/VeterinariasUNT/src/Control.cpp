/*
 * Control.cpp
 *
 *  Created on: 11 oct. 2022
 *      Author: Pablo
 */

#include "Control.h"

Control::Control(float precio1, string descripcion1, Fecha fechaControl) {
	this->precio=precio1;
	this->descripcion=descripcion1;
}

const string& Control::getDescripcion() const {
	return descripcion;
}

const Fecha& Control::getFecha() const {
	return fecha;
}

float Control::getPrecio() const {
	return precio;
}

ostream & operator<<(ostream& salida, Control *control) {
	salida<<"Fecha: "<<control->getFecha()<<endl;
	salida<<"Descripcion: "<<control->getDescripcion()<<endl;
	salida<<"Precio: "<<control->getPrecio()<<endl;
	return salida;
}


/*
 * Servicio.cpp
 *
 *  Created on: 17 oct. 2022
 *      Author: Pablo
 */

#include "Servicio.h"

Servicio::Servicio(int cod, string desc, float precio):cod(cod), descripcion(desc),precioBase(precio) {}

Servicio::~Servicio() {
	// TODO Auto-generated destructor stub
}

/* getters ----------------------------------*/
int Servicio::getCod() const {
	return cod;
}
const string& Servicio::getDescripcion() const {
	return descripcion;
}
float Servicio::getPrecioBase() const {
	return precioBase;
}
/* FIN getters ----------------------------------*/

ostream & operator<<(ostream& salida, Servicio *serv) {
	salida<< "Cód: "<< serv->getCod() <<endl;
	salida<< "Descripción: "<<serv->getDescripcion()<<endl;
	salida<< "Precio: "<<serv->getPrecioBase()<<endl;
	return salida;
}

/*
 * Evento.cpp
 *
 *  Created on: 17 oct. 2022
 *      Author: Pablo
 */

#include "Evento.h"

int Evento::nroEventos=0;

Evento::Evento(int pers, string desc, Fecha fecha):personas(pers), descripcion(desc), fecha(fecha) {
	this->cod = ++Evento::nroEventos;
}

/* getters ---------------------------------------*/
int Evento::getCod() const {
	return cod;
}
const string& Evento::getDescripcion() const {
	return descripcion;
}
const Fecha& Evento::getFecha() const {
	return fecha;
}

const vector<Servicio*>& Evento::getServicios() const {
	return servicios;
}

int Evento::getPersonas() const {
	return personas;
}
/* FIN getters ----------------------------------*/
Evento::~Evento() {
	// TODO Auto-generated destructor stub
}

/* Metodos Evento*/

void Evento::agregarServicio(Servicio* servi) {
	this->servicios.insert(this->servicios.end(),servi);
}

float Evento::PrecioTarjeta() {
	float precio = 0;
	for(Servicio *serv : this->servicios) {
		precio += serv->getPrecioBase();
	}
	return 1.1*precio;
}

ostream& operator<<(ostream& salida, Evento *ev) {
	salida<<"Evento: "<<ev->getCod()<<" - "<<ev->getDescripcion()<<endl;
	salida<<"Fecha: "<<ev->getFecha()<<endl;
	salida<<"Cantidad de servicios: "<<ev->getServicios().size()<<endl;
	salida<<"Monto a pagar: $"<<ev->MontoTotal()<<endl;
//	return salida;
	return ev->print_subclase(salida);
}




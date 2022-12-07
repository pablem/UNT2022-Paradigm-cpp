/*
 * Paquete.cpp
 *
 *  Created on: 16 nov. 2022
 *      Author: Alumno
 */

#include "Paquete.h"
#include "Sistema.h"

Sistema sys1;

float Paquete::PESOS_M3=100;

Paquete::Paquete(string descripcion,bool es_asegurado,bool recorrido_largo,float dimensiones)
	: Mercancia(descripcion,es_asegurado,recorrido_largo){
	this->dimensiones=dimensiones;
	this->AsignarVehiculos();
}

float Paquete::PrecioNeto() const {
	return this->dimensiones * PESOS_M3;
}

/*Aqui se puede mejorar: usar una sola lista de vehiculos en general,
 * y/o hacer un control de vehiculos disponibles, y/o seleccionar motos random*/
void Paquete::AsignarVehiculos() {
	this->vehiculos.insert(vehiculos.end(), sys1.getFurgonetasDisponibles()[0]);
	if (this->recorrido_largo) {
		this->vehiculos.insert(vehiculos.end(), sys1.getAvionesDisponibles()[0]);
		this->vehiculos.insert(vehiculos.end(), sys1.getFurgonetasDisponibles()[1]);
	}
}



/*Getters*/
float Paquete::getDimensiones() const {
	return dimensiones;
}
string Paquete::getTipo() {
	return "Paquete";
}
Paquete::~Paquete(){

}


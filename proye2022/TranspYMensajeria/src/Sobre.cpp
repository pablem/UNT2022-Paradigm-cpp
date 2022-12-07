/*
 * Sobre.cpp
 *
 *  Created on: 16 nov. 2022
 *      Author: Alumno
 */

#include "Sobre.h"
#include "Sistema.h"

Sistema sys2;

float Sobre::PESOS_GR=0.1;

Sobre::Sobre(string descripcion,bool es_asegurado,bool recorrido_largo,float peso)
	: Mercancia(descripcion,es_asegurado,recorrido_largo) {
	this->peso=peso;
	this->AsignarVehiculos();
}

float Sobre::PrecioNeto() const {
	return this->peso * PESOS_GR;
}

/*Aqui se puede mejorar: usar una sola lista de vehiculos en general,
 * y/o hacer un control de vehiculos disponibles, y/o seleccionar motos random*/
void Sobre::AsignarVehiculos() {
	this->vehiculos.insert(vehiculos.end(), sys2.getMotosDisponibles()[0]);
	if (this->recorrido_largo) {
		this->vehiculos.insert(vehiculos.end(), sys2.getAvionesDisponibles()[0]);
		this->vehiculos.insert(vehiculos.end(), sys2.getMotosDisponibles()[1]);
	}
}


/*Getters*/
float Sobre::getPeso() const {
	return peso;
}
string Sobre::getTipo() {
	return "Sobre";
}
Sobre::~Sobre() {

}

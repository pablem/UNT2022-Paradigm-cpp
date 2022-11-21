/*
 * Mercancia.cpp
 *
 *  Created on: 16 nov. 2022
 *      Author: Alumno
 */

#include "Mercancia.h"

int Mercancia::AutoEnum=0;

Mercancia::Mercancia(string descripcion,bool es_asegurado,bool recorrido_largo) {
	AutoEnum++;
	this->cod=AutoEnum;
	this->descripcion=descripcion;
	this->es_asegurado=es_asegurado;
	this->recorrido_largo=recorrido_largo;
}

float Mercancia::PrecioConRecargo() {
	float precio = this->PrecioNeto();
	for(Vehiculo *v : this->vehiculos) {
		precio += v->CalcularRecargo(this);
	}
	return precio;
}

float Mercancia::PrecioTotal(){
	if(this->es_asegurado){
		return (1.1*this->PrecioConRecargo());
	}
	else{
		return this->PrecioConRecargo();
	}
}


int Mercancia::getCod(){
	return this->cod;
}
const string& Mercancia::getDescripcion() const {
	return descripcion;
}
bool Mercancia::getEsAsegurado(){
	return this->es_asegurado;
}
bool Mercancia::getRecorridoLargo(){
	return this->recorrido_largo;
}
const vector<Vehiculo*>& Mercancia::getVehiculos() const {
	return vehiculos;
}
Mercancia::~Mercancia() {
	// TODO Auto-generated destructor stub
}

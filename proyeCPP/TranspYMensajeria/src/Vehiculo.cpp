/*
 * Vehiculo.cpp
 *
 *  Created on: 16 nov. 2022
 *      Author: Alumno
 */

#include "Vehiculo.h"
int Vehiculo::vehiculosCreados = 0;
//Vehiculo(int cod, int dia, int mes, int anio,string descripcion, float precioCompra);
Vehiculo::Vehiculo(Fecha *fecha,string descripcion, float precioCompra) {
	this->cod=++Vehiculo::vehiculosCreados;
	this->fecha_compra=fecha;
	this->descripcion=descripcion;
	this->precio_compra=precioCompra;
}


/*Getters*/
int Vehiculo::getCod() const {
	return cod;
}
const Fecha* Vehiculo::getFechaCompra() const {
	return fecha_compra;
}
const string& Vehiculo::getDescripcion() const {
	return descripcion;
}
float Vehiculo::getPrecioCompra() const {
	return precio_compra;
}
Vehiculo::~Vehiculo() {
	// TODO Auto-generated destructor stub
}

ostream & operator<<(ostream& salida, Vehiculo *v) {
	salida<< "Cod: "<< v->getCod() << " - "<<v->getDescripcion() <<endl;
	salida<< "Fecha de compra: "<< *(v->getFechaCompra()) <<endl;
	salida<< "Valor: $"<< v->getPrecioCompra() <<endl;
	return v->printSubclase(salida);
}


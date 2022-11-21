/*
 * Avion.cpp
 *
 *  Created on: 16 nov. 2022
 *      Author: Alumno
 */

#include "Avion.h"
#include "Mercancia.h"

int Avion::IMPUESTOS=10;
Avion::Avion(Fecha *fecha, string descripcion, float precioCompra): Vehiculo(fecha,descripcion,precioCompra) {}

float Avion::CalcularRecargo(Mercancia *M){
	return M->PrecioNeto()*IMPUESTOS/100;
}

Avion::~Avion() {
	// TODO Auto-generated destructor stub
}

ostream& Avion::printSubclase(ostream& salida) const {
	salida<<"Clase: Aviones"<<endl;
	return salida;
}


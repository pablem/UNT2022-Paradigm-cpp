/*
 * Furgoneta.cpp
 *
 *  Created on: 16 nov. 2022
 *      Author: Alumno
 */

#include "Furgoneta.h"
#include "Mercancia.h"
#include "Paquete.h"

int Furgoneta::D_MAX=1;
int Furgoneta::RECARGO_FIJO=100;
Furgoneta::Furgoneta(Fecha *fecha, string descripcion, float precioCompra, float capacidadCarga): Vehiculo(fecha,descripcion,precioCompra) {
	this->capacidad_carga=capacidadCarga;
}
float Furgoneta::CalcularRecargo(Mercancia *M) {
	if(dynamic_cast<Paquete*>(M)->getDimensiones() > D_MAX) {
		return RECARGO_FIJO;
	}else{
		return 0;
	}
}


float Furgoneta::getCapacidadCarga() const {
	return capacidad_carga;
}
Furgoneta::~Furgoneta() {
	// TODO Auto-generated destructor stub
}

ostream& Furgoneta::printSubclase(ostream& salida) const {
	salida<<"Capacidad: "<<capacidad_carga<<"Tn."<<endl;
	salida<<"Clase: Furgonetas"<<endl;
	return salida;
}

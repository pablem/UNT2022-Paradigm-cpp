/*
 * Moto.h
 *
 *  Created on: 16 nov. 2022
 *      Author: Alumno
 */

#include "Moto.h"
#include "Mercancia.h"
#include "Sobre.h"

int Moto::P_MAX=300;
int Moto::RECARGO=2;
//Vehiculo(int cod, int dia, int mes, int anio,string descripcion, float precioCompra, float cilindrada);
Moto::Moto(Fecha *fecha, string descripcion, float precioCompra, float cilindrada): Vehiculo(fecha,descripcion,precioCompra) {
	this->cilindrada=cilindrada;
}
float Moto::CalcularRecargo(Mercancia *M) {
//	Sobre *so = M;
	if(dynamic_cast<Sobre*>(M)->getPeso() > P_MAX){
		return M->PrecioNeto()*RECARGO/100;
	}else{
		return 0;
	}
}


float Moto::getCilindrada() const {
	return cilindrada;
}
Moto::~Moto() {
	// TODO Auto-generated destructor stub
}

ostream& Moto::printSubclase(ostream& salida) const {
	salida<<"Cilindrada: "<<cilindrada<<"cc."<<endl;
	salida<<"Clase: Motocicletas"<<endl;
	return salida;
}

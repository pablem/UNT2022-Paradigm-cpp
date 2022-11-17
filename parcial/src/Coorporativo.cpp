/*
 * Coorporativo.cpp
 *
 *  Created on: 17 oct. 2022
 *      Author: Pablo
 */

#include "Coorporativo.h"

Coorporativo::Coorporativo(int pers, string desc, Fecha fecha,string inst, bool benf):
	Evento(pers,desc,fecha){
	this->institucion=inst;
	this->beneficio=benf;
}

bool Coorporativo::isBeneficio() const {
	return beneficio;
}
const string& Coorporativo::getInstitucion() const {
	return institucion;
}
/* FIN getters ----------------------------------*/
Coorporativo::~Coorporativo() {
	// TODO Auto-generated destructor stub
}

float Coorporativo::MontoTotal() {
	float precio = 100*this->getPersonas();

	if(this->getPersonas() > 100) {
		precio = this->getPersonas()*this->PrecioTarjeta();
	}
	return (this->beneficio) ? 0.85*precio : precio;
}

ostream& Coorporativo::print_subclase(ostream& salida) {
	salida<<"Institución: "<<this->getInstitucion();
	if(this->beneficio) {
		salida<<" - [evento Beneficiario]"<<endl;
	} else {
		salida<<endl;
	}
	return salida;
}

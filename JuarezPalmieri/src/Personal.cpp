/*
 * Personal.cpp
 *
 *  Created on: 17 oct. 2022
 *      Author: Pablo
 */

#include "Personal.h"

Personal::Personal(int pers, string desc, Fecha fecha, int persAd):
	Evento(pers,desc,fecha){
	this->persAdicionales = persAd;
}
int Personal::getPersAdicionales() const {
	return persAdicionales;
}
Personal::~Personal() {
	// TODO Auto-generated destructor stub
}

float Personal::MontoTotal() {
	return this->PrecioTarjeta()*(getPersonas() + 0.6 * persAdicionales);
}

ostream& Personal::print_subclase(ostream& salida) {
	salida<<"Tipo: Personal"<<endl;
	salida<<"Personas Adicionales"<<this->persAdicionales<<endl;
	return salida;
}


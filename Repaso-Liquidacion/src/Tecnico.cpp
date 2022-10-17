/*
 * Tecnico.cpp
 *
 *  Created on: 17 oct. 2022
 *      Author: Pablo
 */

#include "Tecnico.h"

Tecnico::Tecnico(int dni, string nom, string dire, Fecha nac, Fecha in, float sueldo, int jubilacion):
	Empleado(dni,nom,dire,nac,in, sueldo) {
	this->jubilacionPactado = jubilacion;
}
Tecnico::~Tecnico() {
	// TODO Auto-generated destructor stub
}

unsigned int Tecnico::getJubilacion() {
	return jubilacionPactado;
}

float Tecnico::SueldoBruto() {
	return (Antiguedad()>5) ? SueldoNeto()*(1+COMPENSACION/100) : SueldoNeto();
}




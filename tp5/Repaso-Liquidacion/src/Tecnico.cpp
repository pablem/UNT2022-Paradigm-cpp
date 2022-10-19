/*
 * Tecnico.cpp
 *
 *  Created on: 17 oct. 2022
 *      Author: Pablo
 */

#include "Tecnico.h"

float Tecnico::sueldoBasico = 200;

Tecnico::Tecnico() {S
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




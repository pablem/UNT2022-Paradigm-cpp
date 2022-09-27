/*
 * CuentaSueldo.cpp
 *
 *  Created on: 18/11/2014
 *      Author: Graciela
 */

#include "CuentaSueldo.h"

using namespace std;

CuentaSueldo::CuentaSueldo(double saldo) :
		CajaAhorro(saldo) {
}

CuentaSueldo::CuentaSueldo(const CuentaSueldo &ca) :
		CajaAhorro(ca) {
}

bool CuentaSueldo::depositar(double cantidad) {
	return this->Cuenta::depositar(cantidad);
}

bool CuentaSueldo::extraer(double cantidad) {
	return this->Cuenta::extraer(cantidad);
}


CuentaSueldo::~CuentaSueldo() {
	std::cout << std::endl<< endl << "Cuenta Ahorro  " << this->numero << " destruida" << std::endl;
}


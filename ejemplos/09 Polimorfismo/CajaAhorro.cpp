/*
 * CajaAhorro.cpp
 *
 *  Created on: Nov 1, 2010
 *      Author: hector
 */

#include "CajaAhorro.h"

CajaAhorro::CajaAhorro(double saldo): Cuenta(saldo) {
}

CajaAhorro::CajaAhorro(const CajaAhorro &ca) : Cuenta(ca) {
}

bool CajaAhorro::depositar(double cantidad) {
	return this->Cuenta::depositar(cantidad - RECARGO_OPERACION);
}

bool CajaAhorro::extraer(double cantidad) {
	return this->Cuenta::extraer(cantidad + RECARGO_OPERACION);
}
CajaAhorro::~CajaAhorro() {
	std::cout << std::endl<< endl << "Cuenta Ahorro  " << this->numero << " destruida" << std::endl;
}

ostream& CajaAhorro::imprimir_en(ostream& salida) const {
	salida << "  Caja Ahorro nro " << this->getNumero() << " Saldo: $" << this->getSaldo() << endl;
	return salida;
}

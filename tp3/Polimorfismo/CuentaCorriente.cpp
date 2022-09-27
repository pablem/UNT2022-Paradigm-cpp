/*
 * CuentaCorriente.cpp
 *
 *  Created on: Oct 30, 2010
 *      Author: hector
 */

#include "CuentaCorriente.h"

CuentaCorriente::CuentaCorriente(double saldo, double cantDescubierto) :
	Cuenta(saldo) {
	this->cantDescubierto = cantDescubierto;
}

CuentaCorriente::CuentaCorriente(const CuentaCorriente &cc) :
	Cuenta(cc) {
	cantDescubierto = cc.cantDescubierto;
}

bool CuentaCorriente::extraer(double cantidad) {
	bool resultado = false;

	if (!this->Cuenta::extraer(cantidad)) {
		double cantDescubiertaNecesaria = cantidad - saldo;
		if (cantDescubierto >= cantDescubiertaNecesaria) {
			saldo = saldo - cantidad;
			resultado = true;
		}
	}
	return resultado;
}

CuentaCorriente::~CuentaCorriente() {
	std::cout << std::endl<< endl << "Cuenta Corriente " << this->numero << " destruida" << std::endl;
}

ostream& CuentaCorriente::imprimir_en(ostream& salida) const {
	salida << "  Cuenta Corriente nro " << this->getNumero() << " Saldo: $" << this->getSaldo()
			<< " Sobregiro: " << this->cantDescubierto << endl;
	return salida;
}

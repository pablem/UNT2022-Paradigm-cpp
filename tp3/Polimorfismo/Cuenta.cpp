/*
 * Cuenta.cpp
 *
 *  Created on: Sep 26, 2010
 *      Author: hector
 */

#include <iostream>
#include "Cuenta.h"
int Cuenta::cuentasCreadas=0;
Cuenta::Cuenta(double saldo) :
	numero(++cuentasCreadas), saldo(saldo) {
}

Cuenta::Cuenta(const Cuenta &cuenta) :
	numero(cuenta.numero), saldo(cuenta.saldo) {
}

int Cuenta::getNumero() const {
	return numero;
}

bool Cuenta::depositar(double cantidad) {
	if(cantidad>0){
		saldo = saldo + cantidad;
		return true;
	}
	else
		return false;
}
bool Cuenta::extraer(double cantidad) {
	bool resultado = false;
	if (cantidad <= saldo) {
		saldo = saldo - cantidad;
		resultado = true;
	}
	return resultado;
}

double Cuenta::getSaldo() const {
	return saldo;
}

Cuenta::~Cuenta() {
	std::cout << std::endl << "Cuenta " << this->numero << " destruida" << endl<<endl<< std::endl;
}

ostream& operator<<(ostream& salida, const Cuenta* c) {
	return c->imprimir_en(salida);
}

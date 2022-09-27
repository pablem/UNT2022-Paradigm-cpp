/*
 * CuentaCorriente.h
 *
 *  Created on: Oct 30, 2010
 *      Author: hector
 */

#ifndef CUENTACORRIENTE_H_
#define CUENTACORRIENTE_H_

#include <iostream>
#include "Cuenta.h"

using namespace std;

class CuentaCorriente: public Cuenta {
	double cantDescubierto;
public:
	CuentaCorriente(double saldo, double cantDescubierto);
	CuentaCorriente(const CuentaCorriente &cc);
	~CuentaCorriente();
	bool extraer(double cantidad);
	//No redefine depositar. Usa el heredado de la clase Base
	virtual ostream& imprimir_en(ostream& salida) const;
};

#endif /* CUENTACORRIENTE_H_ */

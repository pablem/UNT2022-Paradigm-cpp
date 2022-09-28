/*
 * CajaAhorro.h
 *
 *  Created on: Nov 1, 2010
 *      Author: hector
 */

#ifndef CAJAAHORRO_H_
#define CAJAAHORRO_H_

#include "Cuenta.h"

class CajaAhorro: public Cuenta {
	static const double RECARGO_OPERACION = 2.0;
public:
	CajaAhorro(double saldo);
	CajaAhorro(const CajaAhorro &ca);
	bool depositar(double cantidad);
	bool extraer(double cantidad);
	~CajaAhorro();
	virtual ostream& imprimir_en(ostream& salida) const;
};

#endif /* CAJAAHORRO_H_ */

/*
 * CuentaSueldo.h
 *
 *  Created on: 18/11/2014
 *      Author: Graciela
 */

#ifndef CUENTASUELDO_H_
#define CUENTASUELDO_H_
#include "CajaAhorro.h"

using namespace std;

class CuentaSueldo:public CajaAhorro {

public:
	CuentaSueldo(double saldo);
	CuentaSueldo(const CuentaSueldo &ca);

	bool depositar(double cantidad);
	bool extraer(double cantidad);

	virtual ~CuentaSueldo();
};


#endif /* CUENTASUELDO_H_ */

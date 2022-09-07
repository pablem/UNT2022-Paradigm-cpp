/*
 * CuentaObjeto.h
 *
 *  Created on: 7 sept. 2022
 *      Author: Alumno
 */
#include <iostream>
#ifndef CUENTAOBJETO_H_
#define CUENTAOBJETO_H_

using namespace std;

class CuentaObjeto {

	static int objCreados;
	static int objDestruidos;

	public:
	CuentaObjeto();
	CuentaObjeto(const CuentaObjeto &);
	CuentaObjeto & metodo(const CuentaObjeto &);
	static void mostrarResumen();
	~CuentaObjeto();

};

#endif /* CUENTAOBJETO_H_ */

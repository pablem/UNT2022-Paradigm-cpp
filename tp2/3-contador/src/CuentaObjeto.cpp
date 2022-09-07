/*
 * CuentaObjeto.cpp
 *
 *  Created on: 7 sept. 2022
 *      Author: Alumno
 */
#include <iostream>
#include "CuentaObjeto.h"

using namespace std;

int CuentaObjeto::objCreados=0;
int CuentaObjeto::objDestruidos=0;

CuentaObjeto::CuentaObjeto() {
	objCreados++;
}

CuentaObjeto::CuentaObjeto(const CuentaObjeto &co) {
	objCreados++;
}

CuentaObjeto & metodo (const CuentaObjeto &co) {
	return co;
}

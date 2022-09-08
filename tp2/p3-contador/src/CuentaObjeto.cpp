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
	dato = 99;
	objCreados++;
}

CuentaObjeto::CuentaObjeto(const CuentaObjeto &co) {
	dato = co.dato;
	objCreados++;
}

//CuentaObjeto & CuentaObjeto::metodo(const CuentaObjeto &co) {
////	CuentaObjeto & aux = co;
//	return co;
//}

void CuentaObjeto::mostrarResumen() {
	cout << "+Creados = " << objCreados <<endl;
	cout << "+Destruidos = " << objDestruidos <<endl;
	cout << endl;
}

CuentaObjeto::~CuentaObjeto() {
	dato = 0;
	objDestruidos++;
}


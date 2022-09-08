//============================================================================
// Name        : p3-contador.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "CuentaObjeto.h"

using namespace std;

int main() {

	CuentaObjeto obj1;
	cout << "1a Invocación:" << endl;
	CuentaObjeto::mostrarResumen();
	{
		CuentaObjeto obj2(obj1);
		cout << "2a Invocación:" << endl;
		CuentaObjeto::mostrarResumen();

		CuentaObjeto *obj3 = new CuentaObjeto();
		cout << "3a Invocación:" << endl;
		CuentaObjeto::mostrarResumen();

//		*obj3 = obj2.metodo(*obj3);
//		cout << "4a Invocación:" << endl;
//		CuentaObjeto::mostrarResumen();

//		delete obj3;
//		cout << "Luego de liberar memoria:" << endl;
//		CuentaObjeto::mostrarResumen();
	}
	cout << "Fuera del ámbito:" << endl;
	CuentaObjeto::mostrarResumen();



	return 0;
}

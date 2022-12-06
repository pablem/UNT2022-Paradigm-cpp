//============================================================================
// Name        : 01-contenedores.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Lista.h"
#include "Iterador.h"

using namespace std;

bool pertenece(Lista &l, item x);

int main() {

	Lista l;

	l.insertar(3);
	l.insertar(2);
	l.insertar(1);

	cout<<pertenece(l,2)<<endl;


	return 0;
}

bool pertenece(Lista &l, item x) {
	Iterador it(l);
	bool resultado = false;
	while(!resultado && it.hayMasElementos()) {
		resultado = it.elementoActual() == x;
		it.avanzar();
	}
	return resultado;
}



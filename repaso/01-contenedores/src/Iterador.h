/*
 * Iterador.h
 *
 *  Created on: 5 dic. 2022
 *      Author: Pablo
 */

#ifndef ITERADOR_H_
#define ITERADOR_H_

#include <iostream>
#include "Lista.h"
using namespace std;


class Iterador {
private:
	const Lista &listaEnlazada;
	Nodo *actual;
public:
	Iterador(const Lista &l) : listaEnlazada(l), actual(l.lista) {};

	bool hayMasElementos() {
		return actual != NULL;
	}

	item elementoActual() {
		return actual->getDato();
	}

	void avanzar() {
		actual = actual->getSiguiente();
	}

	virtual ~Iterador() {};
};

#endif /* ITERADOR_H_ */

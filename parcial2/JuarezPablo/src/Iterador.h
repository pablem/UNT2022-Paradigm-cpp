/*
 * Iterador.h
 *
 *  Created on: 7 dic. 2022
 *      Author: Pablo
 */

#ifndef ITERADOR_H_
#define ITERADOR_H_

#include "JuarezArreglo.h"

template <class X>
class Iterador {
	const Arreglo<X> &contenedor;
	int indiceActual;
public:
	Iterador(const Arreglo<X> &a);
	bool hayMasElementos();
	X elementoActual();
	void avanzar();
};

template <class X>
Iterador<X>::Iterador(const Arreglo<X> &a):contenedor(a),indiceActual(0) {};

template <class X>
bool Iterador<X>::hayMasElementos() {
	return indiceActual<contenedor.capacidad();
};

template <class X>
X Iterador<X>::elementoActual() {
	return contenedor[indiceActual];
};

template <class X>
void Iterador<X>::avanzar() {
	indiceActual++;
};

#endif /* ITERADOR_H_ */

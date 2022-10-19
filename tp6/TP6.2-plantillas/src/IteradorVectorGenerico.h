/*
 * IteradorVectorGenerico.h
 *
 *  Created on: 19 oct. 2022
 *      Author: Alumno
 */

#ifndef ITERADORVECTORGENERICO_H_
#define ITERADORVECTORGENERICO_H_

#include "Vector.h"
using namespace std;

template <class X, int dim>
class IteradorDeVector{

	const Vector<X,dim> &contenedor;
	int indiceActual;

public:
	IteradorDeVector(const Vector<X,dim> &v):contenedor(v),indiceActual(0){};

	bool hayMasElementos(){
		return indiceActual<contenedor.max;
	};

	X elementoActual(){
		return contenedor[indiceActual];
	};

	void avanzar(){
		indiceActual++;
	};
};
#endif /* ITERADORVECTORGENERICO_H_ */

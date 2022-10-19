
#ifndef ITERADORDEVECTOR_H_
#define ITERADORDEVECTOR_H_

#include "Vector.h"
using namespace std;

class IteradorDeVector{
	const Vector &contenedor;
	int indiceActual;

public:
	IteradorDeVector(const Vector &v):contenedor(v),indiceActual(0){};

	bool hayMasElementos(){
		return indiceActual<contenedor.max;
	};

	item elementoActual(){
		return contenedor[indiceActual];
	};

	void avanzar(){
		indiceActual++;
	};
};

#endif /* ITERADORDEVECTOR_H_ */

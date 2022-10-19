/*
 * IteradorDeVector.h
 *
 *  Created on: 19 oct. 2022
 *      Author: Alumno
 */

#ifndef ITERADORDEVECTOR_H_
#define ITERADORDEVECTOR_H_

#include "Vector.h"
using namespace std;

class IteradorDeVector{
			const Vector &listaEnlazada;
			Nodo* actual;
		public:
			Iterador(const Lista &l):listaEnlazada(l),actual(l.lista){};
			//Iterador(const Lista &l):actual(l.lista){};
			bool hayMasElementos(){
				return actual!=NULL;

			};
			item elementoActual(){
				return actual->getDato();
			};
			void avanzar(){
				actual=actual->getSiguiente();
			};
};

#endif /* ITERADORDEVECTOR_H_ */

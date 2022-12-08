/*
 * PARADIGMAS DE PROGRAMACION - 2do PARCIAL 2022 - 06/12/22
 *	
 * APELLIDO Y NOMBRE: Pablo Juarez Palmieri
 * 
 * Arreglo.h
 *
 */

#ifndef ARREGLO_H_
#define ARREGLO_H_

#include <iostream>
using namespace std;

template <class X>
class Arreglo {
	const X indefinido;
	X *arreglo;
	int MAX;
	X* reservarMemoria(unsigned int tama);
public:
		Arreglo(unsigned int dim, X indef);
		Arreglo(const Arreglo<X> &arre);
		X& operator[](int posicion);
		void escribir();
		int capacidad();
		bool pertenece(X x);
		~Arreglo();

		friend class Iterador<X>;
};

template <class X>
X* Arreglo<X>::reservarMemoria(unsigned int tama){
	X *reserva = new X[tama];
	if(reserva==NULL){
		cout<<"Problema: no se pudo realizar la reserva";
	}
	return reserva;
}

template <class X>
Arreglo<X>::Arreglo(unsigned int dim, X indef):indefinido(indef){
	this->MAX = dim+1; //Se agrega un elemento mas para trabajar con arreglo[0] como indefinido del tipo de dato
	this->arreglo = reservarMemoria(this->MAX);
	if (this->arreglo == NULL)
		this->MAX = 0;
	else
		for(int i=0;i<this->MAX;i++)
			this->arreglo[i]=this->indefinido;
}

template <class X>
Arreglo<X>::Arreglo(const Arreglo<X> &arre):indefinido(arre.indefinido){
	this->MAX = arre.MAX;
	this->arreglo = reservarMemoria(this->MAX);
	if (this->arreglo == NULL)
		this->MAX = 0;
	else
		for(int i=0;i<this->MAX;i++)
			this->arreglo[i]=arre.arreglo[i];
}

template <class X>
X& Arreglo<X>::operator[](int posicion){
	//posicion pertenece al intervalo  [1,MAX)
	if(0<posicion && posicion<this->MAX){
		return this->arreglo[posicion];
	}
	else
		return this->arreglo[0];
}

template <class X>
void Arreglo<X>::escribir(){
	cout << endl<<" CONTENEDOR _:" << endl;
	for(int i=1; i<this->MAX;i++ ){
		cout <<"     "<< this->arreglo[i]<<endl;
	}
}

template <class X>
int Arreglo<X>::capacidad(){
	return this->MAX;
}

template <class X>
bool Arreglo<X>::pertenece(X x){
	int k=1;
	while(k<this->MAX && this->arreglo[k]!= x){
			k++;
	}
	return k<this->MAX;
}

template <class X>
Arreglo<X>::~Arreglo(){
	this->MAX = 0;
	delete [] this->arreglo;

};





#endif /* ARREGLO_H_ */


/* Vector.h */

#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
using namespace std;

template<class X, int dim=10>
class IteradorDeVector;

template <class X, int dim=10>
class Vector{

	static X indefinido;
	X *arreglo;
	int max;

public:
	Vector();
	Vector(X);
	Vector(const Vector<X,dim> &);
	int getCapacidad();
	X &operator[](int pos)const;

	~Vector();

	friend class IteradorDeVector<X,dim>;
};

template <class X, int dim>
Vector<X,dim>:: Vector() {
	this->max = dim;
	this->arreglo = new X[dim];
	if(!this->arreglo){
		this->max = 0;
		cerr<<"Memoria insuficiente"<<endl;
	}
}

template <class X, int dim>
Vector<X,dim>:: Vector(X x) {

	this->max = dim;
	this->arreglo = new X[dim];

	if(!this->arreglo){
		this->max = 0;
		cerr<<"Memoria insuficiente"<<endl;
	}
	else {
		for(int i = 0; i < dim; ++i) {
			this->arreglo[i] = x;
		}
	}
}

template <class X, int dim>
Vector<X,dim>:: Vector(const Vector<X,dim> &v) {
	this->arreglo = new X[dim];
	if(!this->arreglo){
		this->max=0;
		cerr<<"Memoria insuficiente"<<endl;
	} else {
		this->max = v.max;
		for(int i = 0; i < max; ++i) {
			this->arreglo[i] = v.arreglo[i];
		}
	}
}

template <class X, int dim>
Vector<X,dim>:: ~Vector() {
	if(this->max>0) {
		delete [] this->arreglo;
	}
	this->max=0;
}

template <class X, int dim>
int Vector<X,dim>:: getCapacidad(){
	return this->max;
}

template <class X, int dim>
X& Vector<X,dim>:: operator[](int pos)const{
	if(0<=pos && pos<this->max)
		return this->arreglo[pos];
	else{
		cerr<<"Posici�n Inv�lida"<<endl;
		return this->arreglo[0];
	}
}

template <class X, int dim>
istream& operator>>(istream& entra, Vector<X,dim> &v){
	for(int i=0; i<v.getCapacidad();i++){
		entra>>v[i];
	}
	return entra;
}

template <class X, int dim>
ostream& operator<<(ostream& sale, Vector<X,dim> &v){
	sale<<"v [ ";
	for(int i=0; i<v.getCapacidad();i++)
		sale<<v[i]<<" ";
	sale<<"] "<<endl;
	return sale;
}

#endif /* VECTOR_H_ */

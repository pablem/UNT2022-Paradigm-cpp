/*  Vector.cpp  */

#include <iostream>
#include "Vector.h"
using namespace std;

bool Vector::reservarMemoria(int dim) {
	this->productos = new Producto[dim];
	if(!this->productos){
		cerr<<"Memoria insuficiente"<<endl;
		return false;
	}
	else
		return true;
}

Vector:: Vector() {

	if(reservarMemoria(3))
		this->max=3;
	else
		this->max=0;
}

Vector:: Vector(int dim, Producto *x) {
//Vector:: Vector(int dim, Producto x = new Producto) {
	if(reservarMemoria(dim)) {
		for(int i = 0; i < dim; ++i) {
			this->productos[i] = *x;
		}
		this->max=dim;
	}
	else
		this->max=0;
}

Vector:: Vector(const Vector &v) {
	if(reservarMemoria(v.max)) {
		this->max = v.max;
		for(int i = 0; i < max; ++i) {
			this->productos[i] = v.productos[i];
		}
	} else
		this->max=0;
}

Vector:: ~Vector() {
	if(this->max>0) {
		delete [] this->productos;
	}
	this->max=0;
}

int Vector:: getCapacidad(){
	return this->max;
}

Producto& Vector:: operator[](int pos)const{
	if(0<=pos && pos<this->max)
		return this->productos[pos];
	else{
		cerr<<"Posición inválida"<<endl;
		return this->productos[0];
	}
}




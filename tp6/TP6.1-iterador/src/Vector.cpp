/*  Vector.cpp  */

#include <iostream>
#include "Vector.h"
using namespace std;

bool Vector::reservarMemoria(int dim) {
	this->arreglo = new item[dim];
	if(!this->arreglo){
		cerr<<"Memoria insuficiente"<<endl;
		return false;
	}
	else
		return true;
}

Vector:: Vector() {

	if(reservarMemoria(10))
		this->max=10;
	else
		this->max=0;
}

Vector:: Vector(int dim, item x) {
	if(reservarMemoria(dim)) {
		for(int i = 0; i < dim; ++i) {
			this->arreglo[i] = x;
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
			this->arreglo[i] = v.arreglo[i];
		}
	} else
		this->max=0;
}

Vector:: ~Vector() {
	if(this->max>0) {
		delete [] this->arreglo;
	}
	this->max=0;
}

int Vector:: getCapacidad(){
	return this->max;
}

item& Vector:: operator[](int pos)const{
	if(0<=pos && pos<this->max)
		return this->arreglo[pos];
	else{
		cerr<<"Posición Inválida"<<endl;
		return this->arreglo[0];
	}
}


istream& operator>>(istream& entra, Vector &v){
	for(int i=0; i<v.getCapacidad();i++){
		entra>>v[i];
	}
	return entra;
}

ostream& operator<<(ostream& sale, Vector &v){
	sale<<"v [ ";
	for(int i=0; i<v.getCapacidad();i++)
		sale<<v[i]<<" ";
	sale<<"] "<<endl;
	return sale;
}



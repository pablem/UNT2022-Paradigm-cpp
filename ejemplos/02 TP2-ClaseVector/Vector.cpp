/*  Vector.cpp  */

#include <iostream>
#include "Vector.h"
using namespace std;

bool Vector::reservarMemoria(int dim){
	this->arreglo = new item[dim];
	if(!this->arreglo){
		cerr<<"Memoria insuficiente"<<endl;
		return false;
	}
	else
		return true;
}

Vector:: Vector(){

	if (reservarMemoria(10))
		this->max=10;
	else
		this->max=0;
}

int Vector:: getCapacidad(){
	return this->max;
}


item& Vector:: operator[](int pos)const{
	if(0<=pos && pos<=this->max)
		return this->arreglo[pos];
	else{
		cerr<<"Posición inválida"<<endl;
		return this->arreglo[0];
	}
}




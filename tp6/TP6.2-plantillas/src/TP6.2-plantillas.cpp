//============================================================================
// Name        : 2-plantillas.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Vector.h"
#include "IteradorVectorGenerico.h"
#include <iostream>
using namespace std;

int main() {

	Vector<int,3> vector1(0);

	cout<<"-Nuevo vector creado-"<<endl;
	cout<<"Capacidad del vector: "<<vector1.getCapacidad()<<endl;

	cout<<"Ingrese los elementos del vector:"<<endl;
	cin>>vector1;

	cout<<vector1<<endl;

//	cout<<"Pruebo si x=7 pertenece al vector:"<<endl;
//	if (pertenece(vector1,7)) {
//		cout<<"Si pertenece!"<<endl;
//	} else {
//		cout<<"NO pertenece :("<<endl;
//	}

	return 0 ;
}

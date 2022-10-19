//============================================================================
// Name        : 2-plantillas.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Servicio.h"
#include "Vector.h"
#include "IteradorVectorGenerico.h"
#include <iostream>
using namespace std;

#define MAX 3

//template<class T>
//bool operator !=(T x, T y){
//	return !(x==y);
//};

template <class X>
bool pertenece(Vector<X,MAX> v, X x);

int main() {


	Vector<int,MAX> vector1;

	cout<<"-Nuevo vector INT creado-"<<endl;
	cout<<"Capacidad del vector: "<<vector1.getCapacidad()<<endl;

	cout<<"Ingrese los elementos del vector:"<<endl;
	cin>>vector1;

	cout<<vector1<<endl;

	cout<<"Pruebo si x=7 pertenece al vector:"<<endl;
	if (pertenece(vector1,7)) {
		cout<<"Si pertenece!"<<endl;
	} else {
		cout<<"NO pertenece :("<<endl;
	}

	Servicio serv1(1,"Servi-1",100);
	Servicio serv2(2,"Servi-2",200);
	Servicio serv3(3,"Servi-3",300);

	Vector<Servicio,MAX> vector2;
//	serv1>>vector2;
//	serv2>>vector2;
//	serv3>>vector2;
	vector2[0]=serv1;
	vector2[1]=serv2;
	vector2[2]=serv3;

	cout<<"\n\n-Nuevo vector de Servicios creado-"<<endl;
	cout<<vector2<<endl;

	cout<<"Pruebo si x=serv2 pertenece al vector:"<<endl;
	if (pertenece(vector2,serv2)) {
		cout<<"Si pertenece!"<<endl;
	} else {
		cout<<"NO pertenece :("<<endl;
	}

	return 0 ;
}

template <class X>
bool pertenece(Vector<X,MAX> v, X x)
{
	IteradorDeVector<X,MAX> it(v);
	for( ; it.hayMasElementos(); it.avanzar()) {
		if (it.elementoActual() == x) {
			return true;
		}
	}
	return false;
}

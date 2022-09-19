//============================================================================
// Name        : p1-Composicion.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//#include "ioVector.h"
#include "Vector.h"
//#include "Producto.h"

#include <iostream>
using namespace std;

void asignarProductos(Producto*);

int main() {

	Vector v;

	for (int i = 0; i < v.getCapacidad(); ++i) {
		cout<<"p-"<<i<<"Nombre: ";
		string descripcion;
		cin>>descripcion;
		v[i].setDescripcion(descripcion);

		cout<<"p-"<<i<<"Precio: ";
		float precio;
		cin>>precio;
		v[i].setPrecioBase(precio);
	}

	for (int i = 0; i < v.getCapacidad(); ++i) {
		v[i].mostrar();
	}


	return 0;
}

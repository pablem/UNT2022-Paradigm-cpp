/*
 * Producto.cpp
 *
 *  Created on: 26 sep. 2022
 *      Author: Alumno
 */
#include <iostream>
#include "Producto.h"

using namespace std;

//M�TODOS DE LA CLASE BASE PRODUCTO-------------------------------------

Producto::Producto():codigo(0),descripion("@"),precioBase(0) {}
Producto::Producto(int cod,string des,float precio):codigo(cod),descripion(des),precioBase(precio) {}
Producto::~Producto() {}

int Producto::getCodigo() const {
	return codigo;
}

const string& Producto::getDescripion() const {
	return descripion;
}

float Producto::getPrecioBase() const {
	return precioBase;
}

//overrays
ostream & operator<<(ostream& salida, Producto *prod) {
	salida<< "Cód: "<< prod->getCodigo() <<endl;
	salida<< "Descripción: "<<prod->getDescripion()<<endl;
	salida<< "Precio Base: "<<prod->getPrecioBase()<<endl;
	return salida;
}

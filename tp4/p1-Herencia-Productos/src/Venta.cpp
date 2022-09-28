/*
 * Venta.cpp
 *
 *  Created on: 28 sept. 2022
 *      Author: Pablo
 */

#include "Venta.h"
#include "Producto.h"

#include <iostream>
using namespace std;

int Venta::ventasCreadas = 0;

Venta::Venta() {
	this->codigo = ++Venta::ventasCreadas;
//	this->fechaVenta = new Fecha; ///<-------------------consulta
}
Venta::Venta(Fecha fecha):fechaVenta(fecha) {
	this->codigo = ++Venta::ventasCreadas;
}
Venta::~Venta() {
//	delete this->fechaVenta;
}

int Venta::getCodigo() const {
	return codigo;
}

const Fecha& Venta::getFechaVenta() const {
	return fechaVenta;
}

const vector<Producto*>& Venta::getProductos() const {
	return productos;
}

//métodos de Venta:
float Venta::calcularMonto() {
	float suma = 0;
	vector<Producto*>::iterator it;
	for (it=this->productos.begin(); it!=this->productos.end(); ++it) {
		suma += (*it)->calcularPrecio();
//		suma = 999;
	}
	return suma;
}

void Venta::agregarProductos(Producto *p) {
	this->productos.insert(this->productos.end(),p);
}

ostream &operator<<(ostream &salida, Venta *venta) {
	salida<<"Venta Cod. "<<venta->getCodigo()<<endl;
	salida<<"Fecha "<<venta->getFechaVenta()<<endl;
	return salida;
}


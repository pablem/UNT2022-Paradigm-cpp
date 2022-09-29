/*
 * Venta.cpp
 *
 *  Created on: 19 sep. 2022
 *      Author: Alumno
 */

#include "Venta.h"

#include <iostream>
using namespace std;

int Venta::ventasRealizadas=0;

Venta::Venta(Fecha fecha, string clien):fechaCompra(fecha) {
	this->codigo = ++Venta::ventasRealizadas;
	this->cliente = clien;
}

bool Venta::agregarLibro(Libro *lib) {
	this->libros.insert(this->libros.end(),lib);
	return true;
}

float Venta::calcularMonto() {
	float suma = 0;
	vector<Libro*>::iterator it;
	for (it=this->libros.begin(); it!=this->libros.end(); ++it) {
		suma += (*it)->getPrecioBase();
	}
	return suma;
}

int Venta::getCodigo() const {
	return codigo;
}

const string& Venta::getCliente() const {
	return cliente;
}

const Fecha& Venta::getFechaCompra() const {
	return fechaCompra;
}

const vector<Libro*>& Venta::getLibros() const {
	return libros;
}

ostream & operator<<(ostream& salida, Venta *venta) {
	salida<<"Venta Cód: "<<venta->getCodigo()<<endl;
	salida<<"Fecha de compra: "<<venta->getFechaCompra()<<endl;
	salida<<"Cliente: "<<venta->getCliente()<<endl;
	return salida;
}

/*
 * Venta.cpp
 *
 *  Created on: 19 sep. 2022
 *      Author: Alumno
 */

#include "Venta.h"

#include <iostream>
using namespace std;

int Venta::ventasRealizadas=9;

Venta::Venta() {
	this->codigo = ++Venta::ventasRealizadas;
//	this->fechaCompra= new Fecha;
}

Venta::Venta(Fecha &fecha, string clien):fechaCompra(fecha) {
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

const string& Venta::getCliente() const {
	return cliente;
}

const Fecha& Venta::getFechaCompra() const {
	return fechaCompra;
}

const vector<Libro*>& Venta::getLibros() const {
	return libros;
}

Venta::~Venta() {
	cout<<"Elimina venta\n";
	libros.clear();//??
}


ostream & operator<<(ostream& salida, Venta *venta) {

	salida<< "Cliente: "<< venta->getCliente() <<endl;
	salida<< "Libros: "<< endl;
	int i = 1;
	for(auto x : venta->getLibros()) {
		salida<<"\t"<<i++<<") "<<x->getTitulo()<<endl;
	}
	return salida;
}

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

//bool Venta::agregarLibro(string titulo, string descr, Autor &autor, Categoria cat, float precio) {
//	Libro *nuevo = new Libro(titulo,descr,&autor,cat,precio);
//	this->libros.insert(this->libros.end(),nuevo);
//	return true;
//}

float Venta::calcularMonto() {
	float suma = 0;
	vector<Libro*>::iterator it;
	for (it=this->libros.begin(); it!=this->libros.end(); ++it) {
		suma += (*it)->getPrecioBase();
	}
	return suma;
}

const vector<Libro*>& Venta::getLibros() const {
	return libros;
}

//Al eliminarse la venta, se eliminan
//todos los libros asociadas a la misma
Venta::~Venta() {
	cout<<"Elimina venta\n";
	libros.clear();//??
}

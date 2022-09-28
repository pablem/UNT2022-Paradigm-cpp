/*
 * Producto.cpp
 *
 *  Created on: 26 sep. 2022
 *      Author: Alumno
 */
#include <iostream>
#include "Fecha.h"
#include "Producto.h"

using namespace std;

//MÉTODOS DE LA CLASE BASE PRODUCTO-------------------------------------

Producto::Producto():codigo(0),descripion("@"),precioBase(0) {}
Producto::Producto(int cod,string des,float precio):codigo(cod),descripion(des),precioBase(precio) {}
Producto::~Producto() {}

int Producto::getCodigo() const {
	return codigo;
}

const string& Producto::getDescripion() const {
	return descripion;
}

float Producto::calcularPrecio() {
	return 0;
}

//METODOS CLASE PROD ALIMENTICIO---------------------------------------

ProdAlimenticio::ProdAlimenticio(int cod,string des,float precio,Fecha fecha, bool apto) : Producto(cod,des,precio) {
	this->aptoCeliaco = apto;
}

bool ProdAlimenticio::isAptoCeliaco() const {
	return aptoCeliaco;
}

const Fecha& ProdAlimenticio::getFechaVto() const {
	return fechaVto;
}

float ProdAlimenticio::calcularPrecio() {
	return 1.21*precioBase;
}

ProdAlimenticio::~ProdAlimenticio() {}

//METODOS CLASE PROD LIMPIEZA---------------------------------------

ProdLimpieza::ProdLimpieza(int cod,string des,float precio,bool toxico) : Producto(cod,des,precio) {
	this->esToxico = toxico;
}

bool ProdLimpieza::isToxico() const {
	return esToxico;
}

float ProdLimpieza::calcularPrecio() {
	return 1.105*precioBase;
}

ProdLimpieza::~ProdLimpieza() {}




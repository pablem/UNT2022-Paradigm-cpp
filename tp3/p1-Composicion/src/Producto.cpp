#include<iostream>
#include "Producto.h"

using namespace std;

int Producto::productosCreados=0;

Producto::Producto() {
	codigo=++Producto::productosCreados;
	precioBase=0;
	descripcion=" ";
}

Producto::Producto(string desc, float precio) {
	codigo = ++Producto::productosCreados;
	precioBase = precio;
	descripcion = desc;
}

Producto::Producto(const Producto &p) {
	codigo=p.codigo;
	precioBase=p.precioBase;
	descripcion=p.descripcion;
}

float Producto::calcularPrecio() {
	return (1.0+this->IVA)*this->precioBase;
}

void Producto::mostrar() {
	cout << codigo << " - " << descripcion << " - $" << precioBase <<endl;
}

//string Producto::listar() {
//	return  (string)codigo << " - " << descripcion << " - $" << (string)precioBase;
//}

//int Producto::getCodigo() const {
//	return codigo;
//}

void Producto::setDescripcion(const string &descripcion) {
	this->descripcion = descripcion;
}

//const string& Producto::getDescripcion() const {
//	return descripcion;
//}

void Producto::setPrecioBase(float precioBase) {
	this->precioBase = precioBase;
}

//float Producto::getPrecioBase() const {
//	return precioBase;
//}



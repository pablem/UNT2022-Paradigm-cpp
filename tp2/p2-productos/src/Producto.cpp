#include<iostream>
#include "Producto.h"

using namespace std;

Producto::Producto() {
	codigo=0;
	precioBase=0;
//	descripcion=""; //string me lo permite
}

Producto::Producto(int cod, string desc, float precio) {
	codigo = cod;
	precioBase = precio;
	descripcion = desc;
}

Producto::Producto(const Producto &p) {
	codigo=p.codigo;
	precioBase=p.precioBase;
	descripcion=p.descripcion;
}

float Producto::calcularPrecio() {
	return IVA*precioBase;
}

void Producto::mostrar() {
	cout << codigo << " - " << descripcion << " - Precio base: $" << precioBase <<endl;
}

int Producto::getCodigo() const {
	return codigo;
}

string Producto::getDescripcion() const {
	return descripcion;
}

float Producto::getPrecioBase() const {
	return precioBase;
}



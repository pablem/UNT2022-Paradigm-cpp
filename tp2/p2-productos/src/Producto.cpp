#include<iostream>
#include "Producto.h"

using namespace std;

Producto::Producto() {
	codigo=0;
	precioBase=0;
	descripcion="";
}

Producto::Producto(int cod, string desc, float precio) {
	codigo = cod;
	precioBase = precio;
	descripcion = desc;
}

Producto::Producto()

float Producto::calcularPrecio() {
	return IVA*precioBase;
}

void mostrar() {
	//cout << "C�digo: " << this.get << " - Descripci�n: " << this->descripcion << " - Precio base: " << this->precio <<endl;
}

Producto::~Producto() {
	// TODO Auto-generated destructor stub
}


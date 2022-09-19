#include "Libro.h"

using namespace std;
#include<iostream>


Libro::Libro(int cod, string tit, string desc, string aut, Categoria cat, float prec) {
	this->codigo = cod;
	this->titulo = tit;
	this->descripcion = desc;
	this->autor = aut;
	this->categoria = cat;
	this->precio = prec;

}

const float Libro::IVA = 0.21;

float Libro::getIVA(){
	return IVA;
}
float Libro::getPrecioBase(){
	return precio;
}
void Libro::listarInformacion() {
	cout << "C�digo: " << this->codigo << " - T�tulo: " << this->titulo << " - Categoria: " << this->categoria <<" - etc.." <<endl;
}
Libro::~Libro() {
	// TODO Auto-generated destructor stub
}


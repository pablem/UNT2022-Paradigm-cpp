#include "Libro.h"
#include<iostream>
using namespace std;

int Libro::librosCreados = 332;
const float Libro::IVA = 0.21;

Libro::Libro() {
	this->codigo = ++Libro::librosCreados;
	this->titulo = "Título Desconocido";
	this->descripcion = "Sin Descripción";
	this->autor = new Autor;
	this->categoria = Categoria::Desonocido;
	this->precio = 0;
}
Libro::Libro(string tit, string desc, Autor *aut, Categoria cat, float prec) {
	this->codigo = ++Libro::librosCreados;
	this->titulo = tit;
	this->descripcion = desc;
	this->autor = aut;
	this->categoria = cat;
	this->precio = prec;
}

float Libro::getPrecioBase(){
	return precio;
}

void Libro::listarInformacion() {
	cout << "C�digo: " << this->codigo << " - T�tulo: " << this->titulo << " - Categoria: " << this->categoria <<" - etc.." <<endl;
}

void Libro::getBiografíaAutor() {
	cout<<this->autor->getNombre()<<" - "<<this->autor->getEdad()<<" años."<<endl;
	cout<<this->autor->getBiografia()<<endl;
}
Libro::~Libro() {
	delete this->autor;
}


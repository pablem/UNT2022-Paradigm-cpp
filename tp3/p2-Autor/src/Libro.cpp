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
	cout << "Código: " << this->codigo << " - Título: " << this->titulo << " - Categoria: " << this->categoria <<" - etc.." <<endl;
}

void Libro::getBiografíaAutor() {
	cout<<this->autor->getNombre()<<" - "<<this->autor->getEdad()<<" años."<<endl;
	cout<<this->autor->getBiografia()<<endl;
}

//geters
Autor * Libro::getAutor() {
	return this->autor;
}
Categoria Libro::getCategoria() const {
	return categoria;
}
int Libro::getCodigo() const {
	return codigo;
}
const string& Libro::getDescripcion() const {
	return descripcion;
}
const string& Libro::getTitulo() const {
	return titulo;
}

Libro::~Libro() {
	cout<<"Elimina libro\n";
}

//overrays
ostream & operator<<(ostream& salida, Libro *libro) {
	//(PARCHE como imprimir enum como string?)
	const char* Categ[] = {"Clásico","Policial","Novela","Desconocido"};
	////
	salida<< "Cód: "<< libro->getCodigo() <<endl;
	salida<< "Título: "<<libro->getTitulo()<<endl;
	salida<< "Descr: "<<libro->getDescripcion()<<endl;
	salida<< "Autor: "<<libro->getAutor()<<endl;
	salida<< "Cat: "<<Categ[libro->getCategoria()]<<endl;
	salida<< "Precio: "<<libro->getPrecioBase()<<endl;
	return salida;
}



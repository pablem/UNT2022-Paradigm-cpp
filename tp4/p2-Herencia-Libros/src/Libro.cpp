#include "Libro.h"
#include<iostream>
using namespace std;

int Libro::librosCreados = 332;
const float Libro::IVA = 0.21;

Libro::Libro(string tit, string desc, Autor *aut, Categoria cat, float prec) {
	this->codigo = ++Libro::librosCreados;
	this->titulo = tit;
	this->descripcion = desc;
	this->autor = aut;
	this->categoria = cat;
	this->precioBase = prec;
}
Libro::~Libro() {}

int Libro::getCodigo() const {
	return codigo;
}

const string& Libro::getTitulo() const {
	return titulo;
}

const string& Libro::getDescripcion() const {
	return descripcion;
}

const Fecha& Libro::getFechaPublicacion() const {
	return fechaPublicacion;
}

Autor * Libro::getAutor() {
	return this->autor;
}

Categoria Libro::getCategoria() const {
	return categoria;
}

float Libro::getPrecioBase() const {
	return precioBase;
}

///Métodos de Libro

float Libro::calcularPrecio() {
	return 0;
}

void Libro::getBiografiaAutor() {
	cout<<this->autor->getNombre()<<" - "<<this->autor->getEdad()<<" años."<<endl;
	cout<<this->autor->getBiografia()<<endl;
}

//Métodos de Libro Digital (eBook)------------------------------------------------------------------------------
eBook::eBook(string titu, string descr, Autor *aut, Categoria cat, float prec):Libro(titu,descr,aut,cat,prec) {}
eBook::~eBook() {}

float eBook::calcularPrecio() {
	return (1+Libro::IVA/2)*precioBase;
}

ostream& eBook::printSubclase(ostream& salida) const {
	salida<<"Tipo: Digital"<<endl;
	return salida;
}

//Métodos de Libro Impreso--------------------------------------------------------------------------------------
Impreso::Impreso(string titu, string descr, Autor *aut, Categoria cat, float prec, bool bolsi):Libro(titu,descr,aut,cat,prec) {
	this->esDeBolsillo=bolsi;
}
Impreso::~Impreso() {}

float Impreso::calcularPrecio() {
	float precio = (this->esDeBolsillo) ? this->precioBase : 1.35*this->precioBase;
	return (1+Libro::IVA)*precio;
}

ostream& Impreso::printSubclase(ostream& salida) const {
	salida<<"Tipo: Impreso";
	if(this->esDeBolsillo)
		salida<<" - De Bolsillo"<<endl;
	return salida;
}

//overrays
ostream & operator<<(ostream& salida, Libro *libro) {
	//(PARCHE como imprimir enum como string?)
	const char* Categ[] = {"Clásico","Policial","Novela","Desconocido"};
	////
	salida<< "Cód: "<< libro->getCodigo() <<endl;
	salida<< "Título: "<<libro->getTitulo()<<endl;
	salida<< "Descr: "<<libro->getDescripcion()<<endl;
	salida<< "Autor: "<<libro->getAutor()->getNombre()<<endl;
	salida<< "Cat: "<<Categ[libro->getCategoria()]<<endl;
	salida<< "Precio: "<<libro->getPrecioBase()<<endl;
	return libro->printSubclase(salida);
}



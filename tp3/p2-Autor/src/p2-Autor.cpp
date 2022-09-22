//============================================================================
// Name        : p2-Autor.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Libro.h"
#include "Fecha.h"
#include "Venta.h"
#include "Sistema.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {

	Autor *aut = new Autor("Tolkien","Nació en Inglaterra...",87);
	Libro *lib1 = new Libro("TLOTR","Novela de fantasía épia",aut,Categoria::Novela,3500);
	Libro *lib2 = new Libro("El Hobbit","Novela de fantasía épia",aut,Categoria::Novela,3500);
	Libro *lib3 = new Libro("El Silmarillon","Novela de fantasía épia",aut,Categoria::Novela,3500);
	Fecha f1(20,9,2021);
	Venta *venta = new Venta(f1,"Cliente Pepito");
	venta->agregarLibro(lib1);
	venta->agregarLibro(lib2);
	venta->agregarLibro(lib3);

	cout<<"Total a pagar: $"<<venta->calcularMonto()<<endl;

	for(auto x : venta->getLibros())
		cout<<x<<endl;

	Autor *aut2 = new Autor("autor2","...",25);
	Libro *lib4 = new Libro("libro4","...",aut2,Categoria::Policial,1000);

	Fecha f2(24,9,2021);
	Venta *venta2 = new Venta(f2,"Cliente Anita");
	venta2->agregarLibro(lib4);

	Fecha f3(25,9,2021);
	Venta *venta3 = new Venta(f2,"Cliente Juanito");
	venta3->agregarLibro(lib4);
	venta3->agregarLibro(lib2);

	Sistema sis;
	sis.agregarVenta(venta);
	sis.agregarVenta(venta2);
	sis.agregarVenta(venta3);

	Fecha fechaI(23,9,2021);
	Fecha fechaF(26,9,2021);
	sis.listarVentas(fechaI, fechaF);

	delete aut;
	delete aut2;
	delete lib1;
	delete lib2;
	delete lib3;
	delete lib4;
	delete venta;
	delete venta2;
	delete venta3;

	return 0;
}

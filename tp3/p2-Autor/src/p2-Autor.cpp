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
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {

	Autor *aut = new Autor("Tolkien","Nació en Inglaterra...",87);
	Libro *lib1 = new Libro("TLOTR","Novela de fantasía épia",aut,Categoria::Novela,3500);
	Libro *lib2 = new Libro("El Hobbit","Novela de fantasía épia",aut,Categoria::Novela,3500);
	Libro *lib3 = new Libro("El Silmarillon","Novela de fantasía épia",aut,Categoria::Novela,3500);
	Fecha f1(20,9,2011);
	Venta venta(f1,"Cliente Pepito");
	venta.agregarLibro(lib1);
	venta.agregarLibro(lib2);
	venta.agregarLibro(lib3);

	cout<<"Total a pagar: $"<<venta.calcularMonto()<<endl;

	for(auto x : venta.getLibros())
		cout<<x<<endl;

	Autor *aut2 = new Autor("autor2","...",25);
	Libro *lib4 = new Libro("libro4","...",aut2,Categoria::Policial,1000);

	Fecha f2(21,9,2011);
	Venta venta2(f2,"Cliente Anita");
	venta2.agregarLibro(lib4);

	Fecha f3(22,9,2011);
	Venta venta3(f2,"Cliente Juanito");
	venta3.agregarLibro(lib4);
	venta3.agregarLibro(lib2);

	delete aut;
	delete aut2;
	delete lib1;
	delete lib2;
	delete lib3;
	delete lib4;
	return 0;
}

//============================================================================
// Name        : p2-Autor.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Fecha.h"
#include "Venta.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {

	Autor aut("Tolkien","Nació en Inglaterra...",87);
//	Libro lib1("TLOTR",         "Novela de fantasía épia",&aut,Categoria::Novela,3500);
//	Libro lib2("El Hobbit",     "Novela de fantasía épia",&aut,Categoria::Novela,3500);
//	Libro lib3("El Silmarillon","Novela de fantasía épia",&aut,Categoria::Novela,3500);
	Fecha f1(20,9,2011);
	Venta venta(f1,"Pepi");
	venta.agregarLibro("TLOTR", "Novela de fantasía épia", aut, Categoria::Novela, 3500);
	venta.agregarLibro("El Hobbit", "Novela de fantasía épia", aut, Categoria::Novela, 3500);
	venta.agregarLibro("El Silmarillon", "Novela de fantasía épia", aut, Categoria::Novela, 3500);

	cout<<"Total a pagar: $"<<venta.calcularMonto()<<endl;

	for(auto x : venta.getLibros())
		cout<<x<<endl;

	return 0;
}

//adicionales: hacer iolibro y/o ioautores

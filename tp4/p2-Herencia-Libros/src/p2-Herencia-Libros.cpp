//============================================================================
// Name        : p2-Autor.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Autor.h"
#include "Libro.h"
#include "Fecha.h"
#include "Venta.h"
#include "Sistema.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {

	Autor aut("Tolkien","Nació en Inglaterra...",87);
	Impreso lib1("TLOTR","Novela de fantasía épia",&aut,Categoria::Novela,3500,true);
	Impreso lib2("El Hobbit","Novela de fantasía épia",&aut,Categoria::Novela,3500,true);
	Impreso lib3("El Silmarillon","Novela de fantasía épia",&aut,Categoria::Novela,3500,true);

	Autor aut2("autor2","...",25);
	eBook lib4("libro4","...",&aut2,Categoria::Policial,1000);

	Fecha f1(20,9,2021);
	Fecha f2(25,9,2021);
	Fecha f3(27,9,2021);
	Fecha fechaI(23,9,2021);
	Fecha fechaF(26,9,2021);

	Sistema sis1("TheSYstem");

	sis1.crearVenta(f1,"Clie01");
	sis1.crearVenta(f2,"Clie02");
	sis1.crearVenta(f3,"Clie03");

	sis1.getVenta(1)->agregarLibro(&lib1);
	sis1.getVenta(1)->agregarLibro(&lib2);
	sis1.getVenta(1)->agregarLibro(&lib3);

	sis1.getVenta(2)->agregarLibro(&lib1);
	sis1.getVenta(2)->agregarLibro(&lib4);
	sis1.getVenta(2)->agregarLibro(&lib4);

	sis1.getVenta(3)->agregarLibro(&lib4);

	cout<<"\n00.- Mostrar una venta"<<endl;
	vector<Libro*> libros1 = sis1.getVenta(1)->getLibros();
	for(Libro *lib : libros1) {
		cout<<lib<<endl;
	}

	cout<<"\n01.- Mostrar Ventas creadas"<<endl;
	vector<Venta*> ventas1 = sis1.getVentas();
	for(Venta *venta : ventas1) {
		cout<<venta<<endl;
	}

	cout<<"\n02.- Listar/Calcular ingresos entre las fechas de inicio y final"<<endl;
	sis1.listarVentas(fechaI, fechaF);






	return 0;
}

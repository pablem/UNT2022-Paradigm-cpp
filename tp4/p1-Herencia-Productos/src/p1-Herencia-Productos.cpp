//============================================================================
// Name        : p1-Herencia-Productos.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Producto.h"
#include "Venta.h"
#include "Almacen.h"

#include <iostream>
using namespace std;

int main() {

	Fecha fVto(1,1,2023);
	Fecha f1(1,8,2022);
	Fecha f2(3,8,2022);
	Fecha f3(18,8,2022);
	Fecha f4(20,8,2022);
	Fecha f5(29,8,2022);

	Fecha fIni(2,8,2022);
	Fecha fFin(20,8,2022);

	ProdAlimenticio pa1(01,"alim01",100,fVto,true);
	ProdAlimenticio pa2(02,"alim02",100,fVto,false);
	ProdAlimenticio pa3(03,"alim03",100,fVto,true);
	ProdLimpieza pl1(01,"limp01",100,false);
	ProdLimpieza pl2(02,"limp02",100,true);

	Almacen alm1("Alma-Zen");

	alm1.crearVenta(f1);
	alm1.crearVenta(f2);
	alm1.crearVenta(f3);
	alm1.crearVenta(f4);
	alm1.crearVenta(f5);

	alm1.getVenta(1)->agregarProductos(&pa1);
	alm1.getVenta(1)->agregarProductos(&pa2);

	alm1.getVenta(2)->agregarProductos(&pl1);
	alm1.getVenta(2)->agregarProductos(&pl2);

	alm1.getVenta(5)->agregarProductos(&pa3);
	alm1.getVenta(5)->agregarProductos(&pl2);

	cout<<"\n00.- Mostrar una venta"<<endl;
	vector<Producto*> productoss = alm1.getVenta(2)->getProductos();
	for(Producto *prod : productoss) {
		cout<<prod;
	}
//
//	cout<<"\n01.- Mostrar Ventas creadas"<<endl;
//	vector<Venta*> ventass = alm1.getVentas();
//	for(Venta *venta : ventass) {
//		cout<<venta;
//	}

	cout<<"\n02.- Calcular ingresos entre el 2 y el 20 de Agosto"<<endl;
	alm1.montoFinMes(fIni,fFin);




//	cout<<alm1.getVenta(2)->calcularMonto()<<endl;
//
//	cout<<alm1.getVenta(2)->getProductos()[0]->calcularPrecio();








	return 0;
}

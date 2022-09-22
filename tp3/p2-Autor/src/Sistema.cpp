/*
 * Sistema.cpp
 *
 *  Created on: 22 sept. 2022
 *      Author: Pablo
 */

#include "Sistema.h"

#include <iostream>
using namespace std;

Sistema::Sistema() {
	// TODO Auto-generated constructor stub

}

Sistema::~Sistema() {
	// TODO Auto-generated destructor stub
}

void Sistema::agregarVenta(Venta *ve) {
	this->ventas.insert(this->ventas.end(),ve);
}

void Sistema::listarVentas(Fecha &fechaI, Fecha &fechaF) {
	float importe=0;
	vector<Venta*>::iterator it;
	for (it=ventas.begin(); it!=ventas.end(); ++it){
		if(fechaF >= (*it)->getFechaCompra() && (*it)->getFechaCompra() >= fechaI) {
			importe+= (*it)->calcularMonto();
			cout<<(*it)<<endl;
		}
	}
	cout<<"MONTO RECAUDADO: $"<<importe<<endl;
}


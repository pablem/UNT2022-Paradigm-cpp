/*
 * Sistema.cpp
 *
 *  Created on: 22 sept. 2022
 *      Author: Pablo
 */

#include "Sistema.h"

#include <iostream>
using namespace std;

Sistema::Sistema(string nom): nombre(nom) {}

Sistema::~Sistema() {
	vector<Venta*>::iterator it;
	for (it=this->ventas.begin(); it!=this->ventas.end(); ++it) {
		delete (*it);
	}
	this->ventas.clear();
}

const vector<Venta*>& Sistema::getVentas() const {
	return ventas;
}

Venta * Sistema::getVenta(int cod) {
	Venta *nueva;
	vector<Venta*>::iterator it;
		for (it=this->ventas.begin(); it!=this->ventas.end(); ++it) {
			if((*it)->getCodigo()==cod)
				return (*it);
		}
	return nueva;
}

void Sistema::crearVenta(Fecha fecha, string cliente) {
	Venta *nueva = new Venta(fecha,cliente);
	this->ventas.insert(this->ventas.begin(),nueva);
}

void Sistema::listarVentas(Fecha fechaI, Fecha fechaF) {
	float importe=0;
	vector<Venta*>::iterator it;
	for (it=ventas.begin(); it!=ventas.end(); ++it){
		if(fechaF >= (*it)->getFechaCompra() && (*it)->getFechaCompra() >= fechaI) {
			cout<<(*it)<<endl;
			importe += (*it)->calcularMonto();
		}
	}
	cout<<"Monto total: "<<importe<<endl;
}



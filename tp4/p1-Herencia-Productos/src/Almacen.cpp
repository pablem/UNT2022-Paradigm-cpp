/*
 * Almacen.cpp
 *
 *  Created on: 28 sept. 2022
 *      Author: Pablo
 */

#include "Almacen.h"

Almacen::Almacen(string nom): nombre(nom) {}
Almacen::~Almacen() {
	vector<Venta*>::iterator it;
	for (it=this->ventas.begin(); it!=this->ventas.end(); ++it) {
		delete (*it);
	}
	this->ventas.clear();
}

const vector<Venta*>& Almacen::getVentas() const {
	return ventas;
}

//m�todos de Almac�n:

void Almacen::crearVenta() {
	Venta *nueva = new Venta;
	this->ventas.insert(this->ventas.begin(),nueva);
}
void Almacen::crearVenta(Fecha fecha) {
	Venta *nueva = new Venta(fecha);
	this->ventas.insert(this->ventas.begin(),nueva);
}

void Almacen::montoFinMes(Fecha fechaIn, Fecha fechaFin) {
	float importe=0;
		vector<Venta*>::iterator it;
		for (it=this->ventas.begin(); it!=this->ventas.end(); ++it){
			if(fechaFin>= (*it)->getFechaVenta() && (*it)->getFechaVenta()>= fechaIn) {
				importe += (*it)->calcularMonto();
//				importe = 123;
			}
		}
		cout<<"\nIngresos del mes: "<<importe<<endl;
}

Venta* Almacen::getVenta(int cod) {
	Venta *nula;
	vector<Venta*>::iterator it;
	for (it=this->ventas.begin(); it!=this->ventas.end(); ++it) {
		if ((*it)->getCodigo() == cod )
			return *it;
	}
	return nula;
}





/*
 * Almacen.cpp
 *
 *  Created on: 28 sept. 2022
 *      Author: Pablo
 */

#include "Almacen.h"

Almacen::Almacen(string nom): nombre(nom) {}
Almacen::~Almacen() {
	// TODO Auto-generated destructor stub
}
const vector<Venta*>& Almacen::getVentas() const {
	return ventas;
}

//métodos de Almacén:
void Almacen::crearVenta() {
	Venta *nueva = new Venta;
	this->ventas.insert(this->ventas.begin(),nueva);
}
void Almacen::crearVenta(Fecha fecha) {
	Venta *nueva = new Venta(fecha);
	this->ventas.insert(this->ventas.begin(),nueva);
}

void Almacen::montoFinMes(Fecha fechaFin, Fecha fechaIn) {
	float importe=0;
		vector<Venta*>::iterator it;
		for (it=this->ventas.begin(); it!=this->ventas.end(); ++it){
			if(fechaFin>= (*it)->getFechaVenta() && (*it)->getFechaVenta()>= fechaIn)
				importe+= (*it)->calcularMonto();
		}
		cout<<"\nIMPORTE A LA FECHA: "<<importe<<endl;
}




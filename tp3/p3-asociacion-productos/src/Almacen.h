/*
 * Almacen.h
 *
 *  Created on: 28 sept. 2022
 *      Author: Pablo
 */

#ifndef ALMACEN_H_
#define ALMACEN_H_
#include "Venta.h"
#include "Fecha.h"
#include <vector>
#include <iostream>
using namespace std;

class Almacen {
private:
	string nombre;
	vector<Venta*> ventas;
public:
	Almacen(string);
	~Almacen();
	const vector<Venta*>& getVentas() const;

	//métodos de Almacén:
	void montoFinMes(Fecha,Fecha);
	void crearVenta();
	void crearVenta(Fecha);
};

#endif /* ALMACEN_H_ */

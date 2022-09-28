/*
 * Venta.h
 *
 *  Created on: 28 sept. 2022
 *      Author: Pablo
 */

#ifndef VENTA_H_
#define VENTA_H_
#include "Producto.h"
#include "Fecha.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Venta {
private:
	static int ventasCreadas;
	int codigo;
	Fecha fechaVenta;
	vector<Producto*> productos;
public:
	Venta();
	Venta(Fecha);
	virtual ~Venta();

	//getters
	int getCodigo() const;
	const Fecha& getFechaVenta() const;
	const vector<Producto*>& getProductos() const;

	//métodos de Venta:
	float calcularMonto();
	void agregarProductos(Producto*);

};

//overrays
ostream & operator<<(ostream &salida, Venta *venta);

#endif /* VENTA_H_ */

/*
 * Sistema.h
 *
 *  Created on: 22 sept. 2022
 *      Author: Pablo
 */

#ifndef SISTEMA_H_
#define SISTEMA_H_

#include "Venta.h"
#include "Fecha.h"

#include <vector>
#include <algorithm>
#include <iostream>

class Sistema {
private:
	vector<Venta*> ventas;
public:
	Sistema();
	void agregarVenta(Venta*);
	void listarVentas(Fecha&,Fecha&);
	~Sistema();
};

#endif /* SISTEMA_H_ */

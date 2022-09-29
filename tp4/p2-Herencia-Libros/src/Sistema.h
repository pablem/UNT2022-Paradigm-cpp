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
#include <iostream>
using namespace std;

class Sistema {
private:
	string nombre;
	vector<Venta*> ventas;
public:
	//constr/destr
	Sistema(string);
	~Sistema();
	//getters
	const vector<Venta*>& getVentas() const;
	//métodos
	Venta * getVenta(int cod);
	void crearVenta(Fecha,string);
	void listarVentas(Fecha,Fecha);

};

#endif /* SISTEMA_H_ */

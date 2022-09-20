/*
 * Venta.h
 *
 *  Created on: 19 sep. 2022
 *      Author: Alumno
 */

#ifndef VENTA_H_
#define VENTA_H_

#include "Libro.h"
//#include "Autor.h"
#include "Fecha.h"

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Venta {

private:
	static int ventasRealizadas;
	int codigo;
	Fecha fechaCompra;
	string cliente;
	vector<Libro*> libros;

public:
	Venta();
	Venta(Fecha &fecha,string cliente);
//	bool agregarLibro(Libro&);
	bool agregarLibro(string tit, string desc, Autor &aut, Categoria cat, float prec);
	float calcularMonto();
	virtual ~Venta();
};

#endif /* VENTA_H_ */

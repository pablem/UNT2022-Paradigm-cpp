/*
 * Venta.h
 *
 *  Created on: 19 sep. 2022
 *      Author: Alumno
 */

#ifndef VENTA_H_
#define VENTA_H_

#include "Libro.h"
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
	Venta(Fecha,string);
	//getters
	int getCodigo() const;
	const Fecha& getFechaCompra() const;
	const vector<Libro*>& getLibros() const;
	const string& getCliente() const;
	//métodos
	bool agregarLibro(Libro*);
	float calcularMonto();
};

ostream & operator<<(ostream& salida, Venta *venta);

#endif /* VENTA_H_ */

/*
 * Producto.h
 *
 *  Created on: 26 sep. 2022
 *      Author: Alumno
 */
#ifndef PRODUCTO_H_
#define PRODUCTO_H_

#include <iostream>
using namespace std;

class Producto {
private:
	int codigo;
	string descripion;
	float precioBase;
public:
	//constructor & destructor
	Producto();
	Producto(int cod,string des,float precio);
	~Producto();
	//getters
	int getCodigo() const;
	const string& getDescripion() const;
	float getPrecioBase() const;
	//métodos
	
};

//overrays
ostream & operator<<(ostream& salida, Producto *prod);

#endif /* PRODUCTO_H_ */

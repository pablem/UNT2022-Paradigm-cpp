/*
 * Producto.h
 *
 *  Created on: 26 sep. 2022
 *      Author: Alumno
 */

#ifndef PRODUCTO_H_
#define PRODUCTO_H_

#include "Fecha.h"

#include <iostream>
using namespace std;

class Producto {
protected:
	int codigo;
	string descripion;
	float precioBase;
public:
	//constructor & destructor
	Producto();
	Producto(int cod,string des,float precio);
	virtual ~Producto();
	//getters
	int getCodigo() const;
	const string& getDescripion() const;
	//métodos
	virtual float calcularPrecio();
};

class ProdAlimenticio : public Producto {
private:
	Fecha fechaVto;
	bool aptoCeliaco;
public:
	//construct
	ProdAlimenticio(int cod,string des,float precio,Fecha fecha,bool apto);
	~ProdAlimenticio();
	//getters
	bool isAptoCeliaco() const;
	const Fecha& getFechaVto() const;
	//metodos
	float calcularPrecio();
};

class ProdLimpieza: public Producto {
private:
	bool esToxico;
public:
	ProdLimpieza(int cod,string des,float precio,bool toxico);
	~ProdLimpieza();
	//getters
	bool isToxico() const;
	//metodos
	float calcularPrecio();
};

#endif /* PRODUCTO_H_ */

/*
 * Vehiculo.h
 *
 *  Created on: 16 nov. 2022
 *      Author: Alumno
 */
#ifndef VEHICULO_H_
#define VEHICULO_H_

#include <iostream>
#include <vector>
#include "Fecha.h"

class Mercancia;

class Vehiculo {
private:
	static int vehiculosCreados;	//Autonumerico
	int cod;						//Se asigna automaticamente dentro del constructor
	Fecha *fecha_compra;
	string descripcion;
	float precio_compra;
public:
	Vehiculo(Fecha*,string,float);
	virtual float CalcularRecargo(Mercancia *M)=0;


	/*Getters*/
	int getCod() const;
	const Fecha* getFechaCompra() const;
	const string& getDescripcion() const;
	float getPrecioCompra() const;
	virtual ~Vehiculo();
	virtual ostream& printSubclase(ostream& salida) const = 0;
};

ostream & operator<<(ostream& salida, Vehiculo *v);

#endif /* VEHICULO_H_ */

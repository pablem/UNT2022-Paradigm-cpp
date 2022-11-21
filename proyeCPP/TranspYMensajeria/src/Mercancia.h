/*
 * Mercancia.h
 *
 *  Created on: 16 nov. 2022
 *      Author: Alumno
 */
#ifndef MERCANCIA_H_
#define MERCANCIA_H_

#include <iostream>
#include <vector>
#include "Vehiculo.h"

using namespace std;

class Mercancia {
protected:
	static int AutoEnum;
	int cod;
	string descripcion;
	bool es_asegurado;
	bool recorrido_largo;
	vector<Vehiculo*> vehiculos;
public:
	Mercancia(string descripcion,bool es_asegurado,bool recorrido_largo);
	virtual float PrecioNeto() const =0;
	virtual void AsignarVehiculos()=0;
	float PrecioConRecargo();
	float PrecioTotal();

	/*Getters*/
	int getCod();
	const string& getDescripcion() const;
	bool getEsAsegurado();
	bool getRecorridoLargo();
	const vector<Vehiculo*>& getVehiculos() const;
	virtual string getTipo() = 0;
	virtual ~Mercancia();
};

#endif /* MERCANCIA_H_ */

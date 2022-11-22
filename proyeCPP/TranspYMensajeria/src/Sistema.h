/*
 * Sistema.h
 *
 *  Created on: 18 nov. 2022
 *      Author: Alumno
 */

#ifndef SISTEMA_H_
#define SISTEMA_H_

#include <typeinfo.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include "Fecha.h"
#include "Persona.h"
#include "Supervisor.h"
#include "Vehiculo.h"
#include "Moto.h"
#include "Furgoneta.h"
#include "Avion.h"
#include "Envio.h"

using namespace std;

enum tipoVehiculo{moto, furgoneta, avion};

class Sistema {
private:
	/*temporalmente 3 listas de vahiculos*/
	static vector<Vehiculo*> motosDisponibles;
	static vector<Vehiculo*> furgonetasDisponibles;
	static vector<Vehiculo*> avionesDisponibles;
	/**/
	vector<Supervisor*> supervisores;
	vector<Envio*> envios;

public:
	Sistema();
	void CrearSupervisor(int dni, int cuil, string nombre, int telefono, Direccion *dire);
	void CrearVehiculo(tipoVehiculo tipo, Fecha *fecha, string descripcion, float precioCompra, float caracteristicas=0.0);
	void AsignarVehiculoASupervisor(tipoVehiculo tipo, int iVehiculo, int dniSup); /*temporalmente 3 listas de vahiculos*/
	void CrearEnvio(tipoEnvio tipo, Fecha *fecha, Persona *origen, Persona *dest, string descripcion, bool es_asegurado, bool es_recorrido_largo, float caracteristicas);
	void EmitirInforme(Fecha *fecha);
	vector<Vehiculo*> FiltrarVehiculos(tipoVehiculo tipo);


	/*Getters*/
	const vector<Supervisor*>& getSupervisores() const;
	const vector<Vehiculo*>& getAvionesDisponibles() const;
	const vector<Vehiculo*>& getFurgonetasDisponibles() const;
	const vector<Vehiculo*>& getMotosDisponibles() const;
	const vector<Envio*>& getEnvios() const;
	virtual ~Sistema();
};

#endif /* SISTEMA_H_ */

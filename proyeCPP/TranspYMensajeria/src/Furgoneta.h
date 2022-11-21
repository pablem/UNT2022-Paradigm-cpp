/*
 * Furgoneta.h
 *
 *  Created on: 16 nov. 2022
 *      Author: Alumno
 */
#ifndef FURGONETA_H_
#define FURGONETA_H_

#include "Vehiculo.h"

class Paquete;

class Furgoneta : public Vehiculo {
private:
	static int D_MAX;
	static int RECARGO_FIJO;
	float capacidad_carga;
public:
	Furgoneta(Fecha*,string,float,float);
	float CalcularRecargo(Mercancia *M);


	float getCapacidadCarga() const;
	~Furgoneta();
	ostream& printSubclase(ostream& salida) const;
};

#endif /* FURGONETA_H_ */

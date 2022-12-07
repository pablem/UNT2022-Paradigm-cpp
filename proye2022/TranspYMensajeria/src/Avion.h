/*
 * Avion.h
 *
 *  Created on: 16 nov. 2022
 *      Author: Alumno
 */
#ifndef AVION_H_
#define AVION_H_
#include "Vehiculo.h"

class Avion: public Vehiculo {
private:
	static int IMPUESTOS;
public:
	Avion(Fecha*,string,float);
	float CalcularRecargo(Mercancia *M);
	~Avion();
	ostream& printSubclase(ostream& salida) const;
};

#endif /* AVION_H_ */

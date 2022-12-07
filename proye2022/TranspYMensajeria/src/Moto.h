/*
 * Moto.h
 *
 *  Created on: 16 nov. 2022
 *      Author: Alumno
 */

#ifndef MOTO_H_
#define MOTO_H_

#include <iostream>
#include "Fecha.h"
#include "Vehiculo.h"

using namespace std;

class Sobre;

class Moto: public Vehiculo {
private:
	float cilindrada;
	static int P_MAX;
	static int RECARGO;
public:
	Moto(Fecha*,string,float,float);
	float CalcularRecargo(Mercancia *M);


	float getCilindrada() const;
	~Moto();
	ostream& printSubclase(ostream& salida) const;
};

#endif /* MOTO_H_ */

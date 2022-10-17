/*
 * Tecnico.h
 *
 *  Created on: 17 oct. 2022
 *      Author: Pablo
 */

#ifndef TECNICO_H_
#define TECNICO_H_

#include "Empleado.h"

class Tecnico: public Empleado {
private:
	static const unsigned int COMPENSACION = 10;//
	unsigned int jubilacionPactado;
public:
	Tecnico(int dni, string nom, string dire, Fecha nac, Fecha in, float sueldo, int jubilacion);
	virtual ~Tecnico();

	unsigned int getJubilacion();
	float SueldoBruto();

};

#endif /* TECNICO_H_ */

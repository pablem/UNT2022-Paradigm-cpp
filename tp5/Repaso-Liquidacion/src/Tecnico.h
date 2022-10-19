/*
 * Tecnico.h
 *
 *  Created on: 17 oct. 2022
 *      Author: Pablo
 */

#ifndef TECNICO_H_
#define TECNICO_H_

#include "TipoEmpleado.h"

class Tecnico: public TipoEmpleado {
private:
	static float sueldoBasico;
	static const int COMPENSACION = 10;//
	int jubilacionPactado;
public:
	Tecnico(int dni, string nom, string dire, Fecha nac, Fecha in, float sueldo, int jubilacion);
	virtual ~Tecnico();

	int Retenciones();
	float SueldoBruto(int antiguedad);

};

#endif /* TECNICO_H_ */

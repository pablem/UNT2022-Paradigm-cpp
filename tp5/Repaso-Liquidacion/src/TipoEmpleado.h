/*
 * TipoEmpleado.h
 *
 *  Created on: 17 oct. 2022
 *      Author: Pablo
 */

#ifndef TIPOEMPLEADO_H_
#define TIPOEMPLEADO_H_

#include "Fecha.h"
#include "Administrativo.h"
#include "Tecnico.h"
#include <typeinfo>
#include <iostream>
using namespace std;

class TipoEmpleado {
private:
	static const int OBRA_COCIAL = 3;

public:
	TipoEmpleado();
	virtual ~TipoEmpleado();

	float Retenciones()=0;
	virtual float SueldoBruto(int antiguedad)=0;
	float SueldoNeto();

};

#endif /* TIPOEMPLEADO_H_ */

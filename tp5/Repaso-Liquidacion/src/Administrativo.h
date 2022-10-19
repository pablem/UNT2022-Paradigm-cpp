

#ifndef ADMINISTRATIVO_H_
#define ADMINISTRATIVO_H_

#include "TipoEmpleado.h"
#include "Fecha.h"
#include <iostream>
using namespace std;


class Administrativo : public TipoEmpleado {

private:
	static const unsigned int JUBILACION = 12; //aportes en % para la jubilación
	static float sueldoBasico;
public:
	Administrativo();
	virtual ~Administrativo();

	float SueldoBruto(int antiguedad);
	int Retenciones();////
};

#endif /* ADMINISTRATIVO_H_ */



#ifndef ADMINISTRATIVO_H_
#define ADMINISTRATIVO_H_

#include "Empleado.h"
#include "Fecha.h"
#include <iostream>
using namespace std;


class Administrativo : public Empleado {

private:
	static const unsigned int JUBILACION = 12; //aportes en % para la jubilación
//	unsigned float sueldoBasico;

public:
	Administrativo(int dni, string nom, string dire, Fecha nac, Fecha in, float sueldo);
	virtual ~Administrativo();

	/* Métodos de Administrativo*/
//	unsigned float Retenciones();
	unsigned int getJubilacion();
	float SueldoBruto();
};

#endif /* ADMINISTRATIVO_H_ */

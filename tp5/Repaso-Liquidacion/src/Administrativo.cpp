
#include "Administrativo.h"

float Administrativo::sueldoBasico = 300;

Administrativo::Administrativo() {}
Administrativo::~Administrativo() {}


 float Administrativo::SueldoBruto() {
	return Administrativo::sueldoBasico = 300*(1+Antiguedad()/100);
}




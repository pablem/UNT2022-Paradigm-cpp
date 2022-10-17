
#include "Administrativo.h"

Administrativo::Administrativo(int dni, string nom, string dire, Fecha nac, Fecha in, float sueldo):
	Empleado(dni,nom,dire,nac,in, sueldo) {
//	this->sueldoBasico = sueldo;
}
Administrativo::~Administrativo() {
	// TODO Auto-generated destructor stub
}

unsigned int Administrativo::getJubilacion() {
	return JUBILACION;
}

 float Administrativo::SueldoBruto() {
	return this->getSueldoBasico()*(1+Antiguedad()/100);
}




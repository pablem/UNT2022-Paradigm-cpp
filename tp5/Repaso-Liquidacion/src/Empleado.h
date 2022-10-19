
#ifndef EMPLEADO_H_
#define EMPLEADO_H_

#include "Fecha.h"
#include "Administrativo.h"
#include "Tecnico.h"
#include <typeinfo>
#include <iostream>
using namespace std;

class Empleado {

private:
	static const unsigned int OBRASOCIAL = 3;
	unsigned int dni;
	string nombre;
	string direccion;
	Fecha fechaNac;
	Fecha fechaIngreso;

public:
	/*Construct - Destruct - Getters*/
	Empleado(int dni, string nom, string dire, Fecha nac, Fecha in, float sueldo);
	virtual ~Empleado();
	unsigned int getDni() const;
	const string& getNombre() const;
	const string& getDireccion() const;
	const Fecha& getFechaNac() const;
	const Fecha& getFechaIngreso() const;
	float getSueldoBasico() const;

	/*Métodos DE Empeado*/
	int Antiguedad();
	string TipoEmpleado();
	virtual unsigned int getJubilacion() = 0;
	virtual float SueldoBruto() = 0;
	virtual ostream& imprimir_en(ostream& salida) const = 0;

};

ostream & operator<<(ostream &, const Empleado *); ////VER

#endif /* EMPLEADO_H_ */

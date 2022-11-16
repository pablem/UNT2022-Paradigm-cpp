
#ifndef PERSONA_H_
#define PERSONA_H_

#include  <iostream>
using namespace std;

#include "Direccion.h"

class Persona {
protected:
	int dni;
	string nombre;
	Direccion direccion;
public:
	/*Constructores*/
//	Persona();
	Persona(int dni, string nombre, Direccion dire);

	/*Getters*/
	/*Métodos de Persona*/





	virtual ~Persona();


};

#endif /* PERSONA_H_ */

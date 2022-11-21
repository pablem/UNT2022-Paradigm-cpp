
#ifndef PERSONA_H_
#define PERSONA_H_

#include  <iostream>
#include "Direccion.h"

using namespace std;

class Persona {
protected:
	int dni;
	string nombre;
	int telefono;
	Direccion *direccion;
public:
	Persona(int dni, string nombre, int telefono, Direccion *dire);
	Persona(const Persona &p);


	/*Getters*/
	int getDni() const;
	const string& getNombre() const;
	int getTelefono() const;
	const Direccion* getDireccion() const;
	virtual ~Persona();
};

ostream & operator<<(ostream& salida, const Persona &p);

#endif /* PERSONA_H_ */

/*
 * Servicio.h
 *
 *  Created on: 17 oct. 2022
 *      Author: Pablo
 */

#ifndef SERVICIO_H_
#define SERVICIO_H_

#include <iostream>
using namespace std;

class Servicio {
private:
	int cod;
	string descripcion;
	float precioBase;
public:
	Servicio(int cod, string desc, float precio);
	virtual ~Servicio();
	int getCod() const;
	const string& getDescripcion() const;
	float getPrecioBase() const;
};

ostream & operator<<(ostream& salida, Servicio *serv);

#endif /* SERVICIO_H_ */

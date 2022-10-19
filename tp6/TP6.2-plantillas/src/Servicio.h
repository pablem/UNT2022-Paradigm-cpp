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
	Servicio(int cod=0, string desc="", float precio=0);
	virtual ~Servicio();
	int getCod() const;
	const string& getDescripcion() const;
	float getPrecioBase() const;

	friend bool operator==(Servicio A, Servicio B){
		if (A.cod == B.cod)
			return true;
		else
			return false;
	};

	friend ostream & operator <<(ostream& salida, Servicio serv) {
		salida<< " Cód: "<<serv.getCod();
		salida<< ". Descripción: "<<serv.getDescripcion();
		salida<< ". Precio: "<<serv.getPrecioBase()<<"  ";
		return salida;
	};
};

#endif /* SERVICIO_H_ */

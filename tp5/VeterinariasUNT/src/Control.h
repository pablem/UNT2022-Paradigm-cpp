/*
 * Control.h
 *
 *  Created on: 11 oct. 2022
 *      Author: Pablo
 */

#ifndef CONTROL_H_
#define CONTROL_H_

#include "Fecha.h"
#include <iostream>
using namespace std;

class Control {
private:
	float precio;
	string descripcion;
	Fecha fecha;
public:
	Control(float,string,Fecha);
	const string& getDescripcion() const;
	const Fecha& getFecha() const;
	float getPrecio() const;

//	Fecha calcProxControl();
};

ostream & operator<<(ostream&,Control*);

#endif /* CONTROL_H_ */

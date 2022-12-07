/*
 * Sobre.h
 *
 *  Created on: 16 nov. 2022
 *      Author: Alumno
 */
#ifndef SOBRE_H_
#define SOBRE_H_

#include <iostream>
#include "Mercancia.h"
//#include "Sistema.h"
class Sistema;

using namespace std;

class Sobre : public Mercancia {
private:
	static float PESOS_GR;
	float peso;
public:
	Sobre(string descripcion,bool es_asegurado,bool recorrido_largo,float peso);
	float PrecioNeto() const;
	void AsignarVehiculos();


	float getPeso() const;
	string getTipo();
	~Sobre();
};

#endif /* SOBRE_H_ */

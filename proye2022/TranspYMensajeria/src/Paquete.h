/*
 * Paquete.h
 *
 *  Created on: 16 nov. 2022
 *      Author: Alumno
 */
#ifndef PAQUETE_H_
#define PAQUETE_H_

#include <iostream>
#include "Mercancia.h"
//#include "Sistema.h"
class Sistema;

using namespace std;

class Paquete : public Mercancia{
private:
	static float PESOS_M3;
	float dimensiones;
public:
	Paquete(string descripcion,bool es_asegurado,bool recorrido_largo,float dimensiones);
	float PrecioNeto() const;
	void AsignarVehiculos();



	float getDimensiones() const;
	string getTipo();
	~Paquete();
};

#endif /* PAQUETE_H_ */

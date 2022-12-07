/*
 * Aplicacion.h
 *
 *  Created on: 17 oct. 2022
 *      Author: Pablo
 */

#ifndef APLICACION_H_
#define APLICACION_H_

//enum tipoEvento{coorporativo, personal};

#include "Fecha.h"
#include "Coorporativo.h"
#include "Personal.h"
#include "Evento.h"
#include <vector>
#include <iostream>

class Aplicacion {

private:
	vector<Evento*> eventos;
public:
	Aplicacion();
	virtual ~Aplicacion();

	void CrearCoorporativo(int pers, string desc, Fecha fecha,string inst, bool benf);
	void CrearPersonal(int pers, string desc, Fecha fecha,int ad);
	Evento * getUnEvento(int cod);
	void Resumen(int mes, int anio);

};

#endif /* APLICACION_H_ */

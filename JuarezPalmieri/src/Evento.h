/*
 * Evento.h
 *
 *  Created on: 17 oct. 2022
 *      Author: Pablo
 */

#ifndef EVENTO_H_
#define EVENTO_H_

#include "Servicio.h"
#include "Fecha.h"
#include <vector>
#include <iostream>
using namespace std;

class Evento {
private:
	static int nroEventos;
	int cod;
	int personas;
	string descripcion;
	Fecha fecha;
	vector<Servicio*> servicios;
public:
	Evento(int pers, string desc, Fecha fecha);
	virtual ~Evento();
	int getCod() const;
	const string& getDescripcion() const;
	const Fecha& getFecha() const;
	int getPersonas() const;
	const vector<Servicio*>& getServicios() const;

	//Metodos Eventos
	void agregarServicio(Servicio*);
	float PrecioTarjeta();
	virtual float MontoTotal()=0;
//	virtual void ListarInformacion()=0;
	virtual ostream& print_subclase(ostream& salida) ;

};

ostream& operator<<(ostream& salida, Evento *ev);

#endif /* EVENTO_H_ */

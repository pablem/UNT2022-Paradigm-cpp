/*
 * Aplicacion.cpp
 *
 *  Created on: 17 oct. 2022
 *      Author: Pablo
 */

#include "Aplicacion.h"

Aplicacion::Aplicacion() {
	// TODO Auto-generated constructor stub

}

Aplicacion::~Aplicacion() {
	vector<Evento*>::iterator it;
		for (it=this->eventos.begin(); it!=this->eventos.end(); ++it) {
			delete (*it);
		}
		this->eventos.clear();
}


void Aplicacion::CrearCoorporativo(int pers, string desc, Fecha fecha,string inst, bool benf) {
	Coorporativo *nuevo = new Coorporativo(pers,desc,fecha,inst,benf);
	this->eventos.insert(this->eventos.begin(),nuevo);
}

void Aplicacion::CrearPersonal(int pers, string desc, Fecha fecha,int ad) {
	Personal *nuevo = new Personal(pers,desc,fecha,ad);
	this->eventos.insert(this->eventos.begin(),nuevo);
}

Evento * Aplicacion::getUnEvento(int cod) {
	Evento *nuevo;
	vector<Evento*>::iterator it;
		for (it=this->eventos.begin(); it!=this->eventos.end(); ++it) {
			if((*it)->getCod()==cod)
				return (*it);
		}
	return nuevo;
}

void Aplicacion::Resumen(int mes, int anio) {
	float total=0;
	for(Evento *ev : this->eventos)
		if(ev->getFecha().getMes() == mes && ev->getFecha().getAnio() == anio ) {
			cout<<ev<<endl;
			total += ev->MontoTotal();
		}
	cout<<"Monto total: $"<<total<<endl;
}

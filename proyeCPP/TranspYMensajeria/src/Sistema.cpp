/*
 * Sistema.cpp
 *
 *  Created on: 18 nov. 2022
 *      Author: Alumno
 */

#include "Sistema.h"

vector<Vehiculo*> Sistema::motosDisponibles;
vector<Vehiculo*> Sistema::furgonetasDisponibles;
vector<Vehiculo*> Sistema::avionesDisponibles;

Sistema::Sistema() {}

void Sistema::CrearSupervisor(int dni, int cuil, string nombre, int telefono, Direccion *dire) {
	Supervisor *nuevo = new Supervisor(dni, cuil, nombre, telefono, dire);
	this->supervisores.insert(supervisores.end(),nuevo);
}

void Sistema::CrearVehiculo(tipoVehiculo tipo, Fecha *fecha, string descripcion, float precioCompra, float caracteristicas) {
	Vehiculo *nuevo;
	switch (tipo) {
		case moto : nuevo = new Moto(fecha, descripcion, precioCompra, caracteristicas);
			this->motosDisponibles.insert(motosDisponibles.end(),nuevo);
			break;
		case furgoneta : nuevo = new Furgoneta(fecha, descripcion, precioCompra, caracteristicas);
			this->furgonetasDisponibles.insert(furgonetasDisponibles.end(),nuevo);
			break;
		case avion : nuevo = new Avion(fecha, descripcion, precioCompra);
			this->avionesDisponibles.insert(avionesDisponibles.end(),nuevo);
			break;
	}
}

void Sistema::AsignarVehiculoASupervisor(tipoVehiculo tipo, int iVehiculo, int dniSup) {
	/*implementando stl::find_if y expresiones lambda*/
//	vector<Supervisor*>::iterator it = find_if(supervisores.begin(), supervisores.end(), [&](Supervisor &s) {return s.getDni() == dniSup;});
	vector<Supervisor*>::iterator it;
	for (it=supervisores.begin(); it!=supervisores.end(); ++it) {
		if((*it)->getDni() == dniSup)
			break;
	}
	if(it != supervisores.end()) {
		switch (tipo) {
			case moto : (*it)->AgregarVehiculo(motosDisponibles[iVehiculo]); break;
			case furgoneta : (*it)->AgregarVehiculo(furgonetasDisponibles[iVehiculo]); break;
			case avion : (*it)->AgregarVehiculo(avionesDisponibles[iVehiculo]); break;
		}
	}
}

void Sistema::CrearEnvio(tipoEnvio tipo, Fecha *fecha, Persona *origen, Persona *dest, string descripcion, bool es_asegurado, bool es_recorrido_largo, float caracteristicas) {
	Envio *nuevo = new Envio(tipo,fecha,origen,dest,descripcion,es_asegurado,es_recorrido_largo,caracteristicas);
	this->envios.insert(envios.end(),nuevo);
}

void Sistema::EmitirInforme(Fecha *fecha) {
	cout<<"Envios realizados - "<< *fecha <<endl;
	for(Envio *e : this->envios) {
		if(fecha - e->getFechaEnvio() == 0)
		{
			e->EmitirDetalles();
			cout<<endl;
		}
	}
}

vector<Vehiculo*> Sistema::FiltrarVehiculos(tipoVehiculo tipo) {
	Fecha f;
	Moto *m = new Moto(&f,"moto1",100,125);
	vector<Vehiculo*> nuevaLista;
	for(Vehiculo *v : this->motosDisponibles) {
		if(typeid(v)==typeid(*m)) {
			cout<<"olakhace";
			nueva
		}
	}
	return
}


/*Getters*/
const vector<Supervisor*>& Sistema::getSupervisores() const {
	return supervisores;
}
const vector<Vehiculo*>& Sistema::getAvionesDisponibles() const {
	return avionesDisponibles;
}

const vector<Vehiculo*>& Sistema::getFurgonetasDisponibles() const {
	return furgonetasDisponibles;
}

const vector<Vehiculo*>& Sistema::getMotosDisponibles() const {
	return motosDisponibles;
}
const vector<Envio*>& Sistema::getEnvios() const {
	return envios;
}

Sistema::~Sistema() {
	vector<Vehiculo*>::iterator it;
	for (it=motosDisponibles.begin(); it!=motosDisponibles.end(); ++it) {
		delete (*it);
	}
	motosDisponibles.clear();

//	vector<Vehiculo*>::iterator it;
	for (it=furgonetasDisponibles.begin(); it!=furgonetasDisponibles.end(); ++it) {
		delete (*it);
	}
	furgonetasDisponibles.clear();

//	vector<Vehiculo*>::iterator it;
	for (it=avionesDisponibles.begin(); it!=avionesDisponibles.end(); ++it) {
		delete (*it);
	}
	avionesDisponibles.clear();

	vector<Supervisor*>::iterator it2;
	for (it2=supervisores.begin(); it2!=supervisores.end(); ++it2) {
		delete (*it2);
	}
	supervisores.clear();

	vector<Envio*>::iterator it3;
	for (it3=envios.begin(); it3!=envios.end(); ++it3) {
		delete (*it3);
	}
	envios.clear();
}


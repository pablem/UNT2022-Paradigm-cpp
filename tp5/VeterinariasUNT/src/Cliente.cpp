
#include "Cliente.h"
#include <vector>

int Cliente::nroClientes = 0;

Cliente::Cliente(string nomb, string email): nombre(nomb), correo(email) {
	this->id = ++Cliente::nroClientes;
}

int Cliente::getId() const {
	return id;
}

const string& Cliente::getNombre() const {
	return nombre;
}

const string& Cliente::getCorreo() const {
	return correo;
}

const vector<Mascota*>& Cliente::getMascotas() const {
	return mascotas;
}

void Cliente::nuevaMascota(string nombre,string raza,Fecha fechaNac) {
	Mascota *nueva = new Mascota(nombre,raza,fechaNac);
	this->mascotas.insert(this->mascotas.begin(),nueva);
}

Mascota * Cliente::getMascota(int k) {
	return this->mascotas[k];
}

void Cliente::listarMascotasProx() {
	bool sinMascotas = true;
	cout<<"Mscotas a controlar en los próximos 5 días:"<<endl;
	for(Mascota *mascota : this->mascotas) {
		if(mascota->hayControlAhora()) {
			cout<<mascota<<endl;
			sinMascotas = false;
		}
	}
	if(sinMascotas)
		cout<<"(No hay mascotas próximas a controlar)"<<endl;
}

float Cliente::calcularGastosMascotas() {
	float gastos = 0;
	for(Mascota *mascota : this->mascotas) {
		gastos += mascota->calcularGastos();
	}
	return gastos;
}

float Cliente::calcularGastosMascotas(int anio, int mes) {
	float gastos = 0;
	for(Mascota *mascota : this->mascotas) {
		gastos += mascota->calcularGastos(anio, mes);
	}
	return gastos;
}

Cliente::~Cliente() {
	vector<Mascota*>::iterator it;
	for (it=mascotas.begin(); it!=mascotas.end(); ++it) {
		delete (*it);
	}
	mascotas.clear();
}

ostream & operator<<(ostream& salida, Cliente *clie) {
	salida<<"Id: "<<clie->getId()<<endl;
	salida<<"Nombre: "<<clie->getNombre()<<endl;
	salida<<"Correo: "<<clie->getCorreo()<<endl;
	return salida;
}


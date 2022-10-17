/*
 * Sucursal.cpp
 *
 *  Created on: 11 oct. 2022
 *      Author: Pablo
 */

#include "Sucursal.h"

Sucursal::Sucursal(int cod, string dire):codigo(cod),direccion(dire) {}

int Sucursal::getCodigo() const {
	return codigo;
}

const string& Sucursal::getDireccion() const {
	return direccion;
}

const vector<Cliente*>& Sucursal::getClientes() const {
	return clientes;
}

void Sucursal::agregarCliente(Cliente *unCliente) {
	this->clientes.insert(this->clientes.end(),unCliente);
}

void Sucursal::resumenMes(int anio, int mes) {
	cout<<"  Gastos del mes "<<mes<<" del año "<<anio<<endl;
	cout<<"  -------------------------------------------" <<endl;
	float gastos = 0;
	float gastosUnCliente;
	for(Cliente *cli : this->clientes) {
		gastosUnCliente=cli->calcularGastosMascotas(anio, mes);
		cout<<"\tCliente: "<<cli->getId()<<endl;
		cout<<"\tMonto recaudado: $"<<gastosUnCliente<<endl;
		gastos += gastosUnCliente;
	}
	cout<<"  -------------------------------------------" <<endl;
	cout<<"  Monto recaudado Total: $"<<gastos<<endl;
}

Sucursal::~Sucursal() {
	// TODO Auto-generated destructor stub
}


ostream & operator<<(ostream& salida, Sucursal *sucu) {
	salida<<"Cód: "<<sucu->getCodigo();
	salida<<" - Dirección: "<<sucu->getDireccion()<<endl;
	return salida;
}

/*
 * Sucursal.h
 *
 *  Created on: 11 oct. 2022
 *      Author: Pablo
 */

#ifndef SUCURSAL_H_
#define SUCURSAL_H_

#include "Fecha.h"
#include "Cliente.h"
#include <vector>
#include <iostream>
using namespace std;

class Sucursal {
private:
	int codigo;
	string direccion;
	vector<Cliente*> clientes;
public:
	Sucursal(int,string);
	~Sucursal();
	int getCodigo() const;
	const string& getDireccion() const;

	void agregarCliente(Cliente *);
	void resumenMes(int,int);
	const vector<Cliente*>& getClientes() const;
};

ostream & operator<<(ostream&,Sucursal*);

#endif /* SUCURSAL_H_ */

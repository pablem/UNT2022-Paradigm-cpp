/*
 * Cliente.h
 *
 *  Created on: 11 oct. 2022
 *      Author: Pablo
 */

#ifndef CLIENTE_H_
#define CLIENTE_H_

#include "Mascota.h"
#include "Fecha.h"
#include <vector>
#include <iostream>
using namespace std;

class Cliente {
private:
	static int nroClientes;
	int id;
	string nombre;
	string correo;
	vector<Mascota*> mascotas;
public:
	Cliente(string nombre, string correo);
	virtual ~Cliente();
	int getId() const;
	const string& getNombre() const;
	const string& getCorreo() const;
	const vector<Mascota*>& getMascotas() const;

	//métodos de Cliente

	void nuevaMascota(string nombre,string raza,Fecha fechaNac);
	Mascota* getMascota(int);
	void listarMascotasProx();
	float calcularGastosMascotas();
	float calcularGastosMascotas(int anio, int mes);
};

ostream & operator<<(ostream&,Cliente*);

#endif /* CLIENTE_H_ */

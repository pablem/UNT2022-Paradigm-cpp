/*
 * Cuenta.h
 *
 *  Created on: Sep 26, 2010
 *      Author: hector
 */

#ifndef CUENTA_H_
#define CUENTA_H_

#include <iostream>

using namespace std;

class Cuenta {
protected:
	static int cuentasCreadas;
	int numero;
	double saldo;
public:
	Cuenta(double saldo);
	Cuenta(const Cuenta &cuenta);
	virtual ~Cuenta();
	int getNumero() const;
	double getSaldo() const;
//Declaramos las fciones depositar, extraer e imprimir_en como fciones
//virtuales y se la redefine en cada una de las clases derivadas
	virtual bool depositar(double cantidad);
	virtual bool extraer(double cantidad);
	//virtual ostream& imprimir_en(ostream& salida)const {return salida;};
	virtual ostream& imprimir_en(ostream& salida)const = 0; // Funcion virtual pura

};
//Sobrecarga del operador de insercion de flujo para el tipo Cuenta
ostream& operator<<(ostream& salida, const Cuenta* c);
#endif /* CUENTA_H_ */

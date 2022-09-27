//============================================================================
// Name        : TestCuenta.cpp
// Author      : Paradigmas 2010
// Version     : 1
// Copyright   : Your copyright notice
// Description : Prueba para la clase Cuenta
//============================================================================

#include <iostream>
#include <cassert>
#include "CuentaCorriente.h"
#include "CajaAhorro.h"

#include "CuentaSueldo.h"

using namespace std;

Cuenta* cargarCuenta(int tipo);
int main() {

// Comportamiento POLIMORFICO:
// Usamos un puntero de clase base para indicar O de clase derivada,
// y usando ese puntero invocamos a la función virtual depositar,
// el programa seleccionará de manera dinámica la función depositar
// de la clase derivada.

		Cuenta *cuenta; // Puntero a Clase Base

		cuenta = new CuentaCorriente(1000, 100);

		cuenta->depositar(500); //saldo = 1000 + 500

		cout <<cuenta<<endl;

		delete cuenta;


		cuenta = new CajaAhorro(1000);

		cuenta->depositar(500); //saldo = 1000 + 500 - RECARGO_OPERACION

		cout <<cuenta<<endl;

		delete cuenta;
/*
		Cuenta c(250);
		c.depositar(500);
		cout  << endl<<"  Cuenta : "<<c.getSaldo()<<endl << endl;


/*
		const int MAX = 3;
		int tipo, i;
		Cuenta* cuentas[MAX];

		for(i=0;i<MAX; i++)
		{
			cout <<"Ingrese el tipo de cuenta que desea crear (1 - Caja Ahorro, 2 - Cuenta Corriente): "<<endl;
			cin>>tipo;
			cuentas[i] = cargarCuenta(tipo);
		}

		// Escribo todas las cuentas del arreglo
		for(i=0;i<MAX; i++)
		{
				cout<<cuentas[i]<<endl;
		}

		// Proceso todas las cuentas del arreglo, depositando 100 en cada una
		cout <<"Proceso todas las cuentas del arreglo, depositando 100 en cada una "<<endl;

		for(i=0;i<MAX; i++)
		{
				cuentas[i]->depositar(100);
				cout<<cuentas[i]<<endl;
		}
//*/
		return 0;
}

Cuenta* cargarCuenta(int tipo){

	float saldo, descubierto;

	Cuenta *ptrCuenta;

	cout <<"Ingrese el saldo de la cuenta:  "<<endl;
	cin>>saldo;

	switch(tipo){

		case 1: {
					ptrCuenta = new CajaAhorro(saldo);
				}break;
		case 2: {
					cout <<"Ingrese el descubierto de la cuenta:  "<<endl;
					cin>>descubierto;
					ptrCuenta = new CuentaCorriente(saldo, descubierto);
				} break;
		case 3: {
					ptrCuenta = new CuentaSueldo(saldo);
				}break;

	 default:
				{
					ptrCuenta = new CajaAhorro(saldo);
				}

	}
	return ptrCuenta;
}

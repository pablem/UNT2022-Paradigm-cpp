//============================================================================
// Name        : TP3Vector.cpp
// Author      : Cátedra Paradigmas de Programación - FACET - UNT
//============================================================================

#include <iostream>

#include "ioVector.h"
#include "Vector.h"

using namespace std;

void mostrarPositivos(Vector v);
bool pertenece(Vector v, item x);

int main() {

	/* Creo un objeto vector */
	Vector v(4,3);
	Vector v2(v);

	/* Muestro la información del vector recien creado */
	cout<<"Capacidad del vector: "<<v.getCapacidad()<<endl;
	cout<<"Datos del Vector (sin inicializar):"<<endl;
	cout<<v<<endl;

	/* Ingreso datos al vector por teclado*/
	cout<<"Ingrese los elementos del vector:"<<endl;
	cin>>v;

	/* Muestro el vector con los datos ingresados */
	cout<<"Datos del Vector (ingresados por teclado):"<<endl;
	cout<<v<<endl;

	/* Cambio valor del vector en la posicion y muestro 3 */
	v[2] = 1000;
	cout<<"Datos del Vector (con 3er elemento cambiado) y copia del original:"<<endl;
	cout<<v<<endl;
	cout<<v2<<endl;

	/*PUNTO 4.c*/
	/* Invoco a la operacion externa mostrarPositivos que trabaja sobre una copia local del parámetro */
	mostrarPositivos(v);

	/* Muestro por pantalla el vector luego de la invocacion a la operación mostrar */
	cout<<v<<endl;

	cout<<"Pruebo si x=7 pertenece al vector modificado:"<<endl;
	if (pertenece(v,7)) {
		cout<<"Si pertenece!"<<endl;
	} else {
		cout<<"NO pertenece :("<<endl;
	}

	return 0 ;
}

void mostrarPositivos(Vector v)
{
	cout<<endl<<"Vector con elementos positivos"<<endl;
	for(int i=0; i<v.getCapacidad();i++)
		if(v[i]<=0)
			v[i]=INDEFINIDO;
	cout<<v<<endl;
}

bool pertenece(Vector v, item x)
{
	for (int i = 0; i < v.getCapacidad(); ++i) {
		if(v[i] == x) {
			return true;
		}
	}
	return false;
}

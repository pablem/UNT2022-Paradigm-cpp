//============================================================================
/*
 * PARADIGMAS DE PROGRAMACION - 2do PARCIAL 2022 - 06/12/22
 *
 * APELLIDO Y NOMBRE: Pablo Juarez Palmieri
 *
 * Prueba.cpp
 *
 */
//============================================================================

#include <iostream>
#include "JuarezArreglo.h"
#include "Iterador.h"

#define MAX 5

using namespace std;

template<class X>
int contarElementos (Arreglo<X> *arr, X item);

int main() {

	cout<<"\n01.- Creo arreglos."<<endl;
	Arreglo<int> arrInt(MAX,-9999);
	Arreglo<char> arrChar(MAX,'.');

	cout<<"\n02.- Cargo arreglos."<<endl;
	for (int i = 0; i <= MAX; ++i) {
		arrInt[i] = i*10;
		arrChar[i] = (char)64+i;
	}

	cout<<"\n03.- Muestro arreglos:"<<endl;
	arrInt.escribir();
	arrChar.escribir();

	cout<<"\n04.- Capacidad de arreglos:"<<endl;
	cout<<arrInt.capacidad()<<endl;
	cout<<arrChar.capacidad()<<endl;

	cout<<"\n05.- Pertenece k = 20 al arreglo?"<<endl;
	if (arrInt.pertenece(20)) {
		cout<<"Si pertenece."<<endl;
	} else {
		cout<<"NO pertenece."<<endl;
	}

	cout<<"\n06.- Pertenece c = 'B' al arreglo?"<<endl;
	if (arrChar.pertenece('B')) {
		cout<<"Si pertenece."<<endl;
	} else {
		cout<<"NO pertenece."<<endl;
	}

	cout<<"\n07.- Funcion Usuario: cantidad de veces que aparece el item k=20"<<endl;
	cout<<contarElementos(&arrInt,20)<<endl;


	return 0;
}

// b) Función externa a la clase arreglo

template<class X>
int contarElementos (Arreglo<X> *arr, X item) {
	int suma = 0;
	Iterador<X> it(arr);
	for( ; it.hayMasElementos(); it.avanzar()) {
		if (it.elementoActual() == item) {
			suma++;
		}
	}
	return suma;
}

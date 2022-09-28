//============================================================================
// Name        : ConstyDest.cpp
// Author      : CW
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Create.h"
using namespace std;


crearydestruir primero(1);	// objeto global

void crearObjetos(void);		//prototipo
void crearObjetos(crearydestruir param); //prototipo

int main ( )
{
	cout << " 	(global creado antes de main)\n";

	cout << "\nDesde main\n";
	crearydestruir segundo(2);	//objeto local a main
	cout << "	(local autom�tico en main)\n";


	crearydestruir *tercero;
	tercero = new crearydestruir(3); //objeto local din�mico a main
	cout << "	(local din�mico en main)\n";


	crearydestruir cuarto(4);	//objeto local a main
	cout << "	(local autom�tico en main)\n";

	static crearydestruir quinto(5);	//objeto static local a main
	cout << "	(local estatico en main)\n";

	//crearObjetos( );	//llamado a funcion para crearObjetos objetos sin parametros

	//cout << "\nRetorno a main\n";

	crearydestruir sexto(6);	//objeto local a main
	cout << "	(local autom�tico en main)\n";


	//ter->~crearydestruir();  //Llamada directa al destructor
	//delete ter; //Llamada indirecta al destructor

	cout << "\n\nDesde funci�n crearObjetos con parametro\n";
	crearObjetos(segundo);
	cout << "\nFin de main\n";

	return 0;
};
//Funcion para crear objetos
void crearObjetos(void)
{
	cout << "\nDesde funci�n crear\n";

	crearydestruir sext(6);
	cout << "	(local automatico en crear)\n";

	static crearydestruir sept(7);
	cout << "	(local estatico en crear)\n";

	crearydestruir oct(8);
	cout << "	(local automatico en crear)\n";

	crearydestruir *nov;
	nov = new crearydestruir(9); //objeto din�mico local a la funcion
	cout << "	(local din�mico en crear)\n";

	cout << "\nFin de funci�n crear\n";
};

void crearObjetos(crearydestruir param){

	cout << "\nFin de funci�n crearObjetos con parametro\n";

};

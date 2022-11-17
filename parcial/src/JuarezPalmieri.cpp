//============================================================================
// Name        : JuarezPalmieri.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Aplicacion.h"
#include "Evento.h"
#include "Servicio.h"
#include "Fecha.h"
#include <vector>
#include <iostream>
using namespace std;

int main() {

	Fecha f1(20,9,2021);
	Fecha f2(25,9,2021);
	Fecha f3(27,9,2021);
	Fecha f4(27,9,2021);

	Aplicacion ap1;

	ap1.CrearPersonal(10, "Evento01", f1, 0);
	ap1.CrearPersonal(20, "Evento02", f2, 10);
	ap1.CrearCoorporativo(30, "Evento03", f3, "Institucion01", true);
	ap1.CrearCoorporativo(400, "Evento04", f4, "Institucion02", false);

	cout<<"\n01.- Mostrar un Evento"<<endl;
	cout<<ap1.getUnEvento(2)<<endl;

	cout<<"\n02.- Agregar servicios a los eventos"<<endl;
	Servicio serv1(77,"Servicio01",700);
	Servicio serv2(22,"Servicio02",2000);
	Servicio serv3(33,"Servicio03",300);
	Servicio serv4(04,"Servicio04",40);
	ap1.getUnEvento(1)->agregarServicio(&serv1);
	ap1.getUnEvento(2)->agregarServicio(&serv2);
	ap1.getUnEvento(3)->agregarServicio(&serv3);
	ap1.getUnEvento(4)->agregarServicio(&serv4);

	cout<<"\n03.- Mostrar Resumen -------------"<<endl;
	ap1.Resumen(9, 2021);

	return 0;
}

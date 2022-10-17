//============================================================================
// Name        : VeterinariasUNT.cpp
// Author      : 
// Version     :
//============================================================================

#include "Fecha.h"
#include "Control.h"
#include "Mascota.h"
#include "Cliente.h"
#include "Sucursal.h"
#include <vector>
#include <iostream>
using namespace std;

int main() {

	Fecha f1 = Fecha(11,1,2021);//si
	Fecha f2 = Fecha(21,1,2021);//si
	Fecha f3 = Fecha(1,1,2022);//No
	Fecha f4 = Fecha(1,3,2021);//No
	Fecha f5 = Fecha(5,5,2011);//No

	Fecha fc1 = Fecha(1,12,2023);
	Fecha fc2 = Fecha(13,10,2022);

	Cliente cli1 = Cliente("Cliente01","Correo01");
	Cliente cli2 = Cliente("Cliente02","Correo02");
	Cliente cli3 = Cliente("Cliente03","Correo03");

	cli1.nuevaMascota("Perro01", "RazaPerro01",Fecha());
	cli1.nuevaMascota("Perro02", "RazaPerro02",Fecha());
	cli2.nuevaMascota("Gato01", "RazaGato01",Fecha());
	cli2.nuevaMascota("Gato02", "RazaGato02",Fecha());
	cli3.nuevaMascota("Gallina01", "Gallina007",Fecha());
	cli3.nuevaMascota("Gallina02", "Gallina007",Fecha());
	cli3.nuevaMascota("Gallina03", "Gallina007",Fecha());

	cli1.getMascota(0)->nuevoControl(15,"Control01",f1);
	cli1.getMascota(1)->nuevoControl(15,"Control01",f5);
	cli2.getMascota(0)->nuevoControl(15,"Control01",f2);
	cli2.getMascota(1)->nuevoControl(15,"Control01",f4);
	cli3.getMascota(0)->nuevoControl(15,"Control01",f1);
	cli3.getMascota(1)->nuevoControl(15,"Control01",f2);
	cli3.getMascota(2)->nuevoControl(15,"Control01",f3);

	cli1.getMascota(0)->cambiarProxControl(fc1);
	cli1.getMascota(1)->cambiarProxControl(fc2);
	cli2.getMascota(0)->cambiarProxControl(fc2);
	cli2.getMascota(1)->cambiarProxControl(fc1);
	cli3.getMascota(0)->cambiarProxControl(fc1);
	cli3.getMascota(1)->cambiarProxControl(fc2);
	cli3.getMascota(2)->cambiarProxControl(fc2);

	Sucursal suc1 = Sucursal(33,"Dire33");
	suc1.agregarCliente(&cli1);
	suc1.agregarCliente(&cli2);
	suc1.agregarCliente(&cli3);

	suc1.resumenMes(2021, 1);


	cout<<cli3.getMascota(2)<<endl;
	cout<<cli3.getMascota(2)->getControles()[0];



	return 0;
}

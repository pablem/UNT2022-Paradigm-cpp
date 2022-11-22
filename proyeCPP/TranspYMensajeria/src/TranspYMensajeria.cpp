//============================================================================
// Name        : TranspYMensajeria.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <iostream>
#include "Sistema.h"
#include "Fecha.h"
#include "Direccion.h"
#include "Vehiculo.h"
#include "Persona.h"

using namespace std;

int main() {

	Sistema sys;

	cout<<"1.- Carga de Vehículos------------------------------------"<<endl;
	Fecha f_fab(18,11,2022);
	sys.CrearVehiculo(moto, &f_fab, "moto1", 100, 125);//1
	sys.CrearVehiculo(moto, &f_fab, "moto2", 200, 300);//2
	sys.CrearVehiculo(furgoneta, &f_fab, "combi1", 1000, 2.8);//3
	sys.CrearVehiculo(furgoneta, &f_fab, "combi2", 2000, 4.5);//4
	sys.CrearVehiculo(avion, &f_fab, "avion1", 10000);//5


	cout<<"\n2.- Carga de Supervisores---------------------------------"<<endl;
	Direccion dire1("Provincia1", "Localidad1", 4600, "Calle1", 100);
	Direccion dire2("Provincia2", "Localidad2", 4000, "Calle2", 200, 4, "B");
	sys.CrearSupervisor(11111111, 1011, "Super1", 111, &dire1);
	sys.CrearSupervisor(22222222, 2022, "Super2", 222, &dire2);

	cout<<"\n3.- Asignar supervisor (por dni) a Vehículo (por índice)--"<<endl;
	sys.AsignarVehiculoASupervisor(moto, 1, 22222222);//moto2 -> sup2
	sys.AsignarVehiculoASupervisor(moto, 0, 22222222);//moto1 -> sup2
	sys.AsignarVehiculoASupervisor(furgoneta, 1, 22222222);//combi2 -> sup2
	sys.AsignarVehiculoASupervisor(avion, 0, 11111111);//avion1 -> sup1

	cout<<"\n4.- Detalles del 2do. supervisor cargado------------------"<<endl;
	cout<<*(sys.getSupervisores()[1])<<endl;
	sys.getSupervisores()[1]->ListarVehiculos();

	cout<<"5.- Carga de envíos---------------------------------------"<<endl;
	Persona orig1(33333333,"Persona1",333,&dire1);
	Persona dest1(44444444,"Persona2",444,&dire2);
	Fecha f1;
	sys.CrearEnvio(sobre, &f1, &orig1, &dest1, "envio1", false, false, 200);//sobre | sin seguro | dist corta | sin recargo
	sys.CrearEnvio(sobre, &f1, &orig1, &dest1, "envio2", false, false, 500);//sobre | sin seguro | dist corta | CON recargo
	sys.CrearEnvio(sobre, &f1, &orig1, &dest1, "envio3", true, false, 200); //sobre | CON seguro | dist corta | sin recargo
	sys.CrearEnvio(sobre, &f1, &orig1, &dest1, "envio4", false, true, 200); //sobre | sin seguro | dist LARGA | sin recargo
	sys.CrearEnvio(sobre, &f1, &orig1, &dest1, "envio5", false, true, 500); //sobre | sin seguro | dist LARGA | CON recargo

	Persona orig2(55555555,"Persona3",555,&dire1);
	Persona dest2(66666666,"Persona4",666,&dire2);		/*Envio en otra fecha*/
	Fecha f2(16,11,2022);
	sys.CrearEnvio(paquete, &f2, &orig2, &dest2, "envio6", false, false, 0.5);//paquete | sin seguro | dist corta | sin recargo
	sys.CrearEnvio(paquete, &f2, &orig2, &dest2, "envio7", false, false, 3);  //paquete | sin seguro | dist corta | CON recargo
	sys.CrearEnvio(paquete, &f2, &orig2, &dest2, "envio8", false, true, 0.5); //paquete | sin seguro | dist LARGA | sin recargo
	sys.CrearEnvio(paquete, &f2, &orig2, &dest2, "envio9", false, true, 3);   //paquete | sin seguro | dist LARGA | CON recargo

	cout<<"\n6.- Detalle de precios------------------------------------"<<endl;
	for(Envio *e : sys.getEnvios()) {
		cout<<e->getMercancia()->getDescripcion();
		cout<<" | neto: "<<e->getMercancia()->PrecioNeto();
//		cout<<" | con recargo: "<<e->getMercancia()->PrecioConRecargo();
		cout<<" | total: "<<e->getPrecio()<<endl;
	}

	cout<<"\n7.- Informe para la fecha actual--------------------------"<<endl;
	sys.EmitirInforme(&f1);






	return 0;
}

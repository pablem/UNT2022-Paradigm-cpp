

#include "Supervisor.h"

Supervisor::Supervisor(int dni, int cuil, string nombre, int tel, Direccion *dire)
	: Persona(dni,nombre,tel,dire), cuil(cuil) { }
Supervisor::Supervisor(const Supervisor &s)
	: Persona(s.dni,s.nombre,s.telefono,s.direccion), cuil(s.cuil) { }

void Supervisor::AgregarVehiculo(Vehiculo *vehiculo) {
	this->vehiculos.insert(this->vehiculos.end(),vehiculo);
}

void Supervisor::ListarVehiculos() {
	cout<<"Vehículos a cargo de "<<this->nombre<<endl;
	for(Vehiculo *v : this->vehiculos) {
		cout<<v<<endl;
	}
}



/*Getters*/
int Supervisor::getCuil() const {
	return cuil;
}
const vector<Vehiculo*>& Supervisor::getVehiculos() const {
	return vehiculos;
}
Supervisor::~Supervisor() {
	// TODO Auto-generated destructor stub
}



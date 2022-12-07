
#ifndef SUPERVISOR_H_
#define SUPERVISOR_H_

#include <iostream>
#include <vector>
#include "Persona.h"
#include "Vehiculo.h"

using namespace std;

class Supervisor : public Persona {
private:
	int cuil;
	vector<Vehiculo*> vehiculos;
public:
	Supervisor(int dni, int cuil, string nombre, int telefono, Direccion *dire);
	Supervisor(const Supervisor &s);
	void AgregarVehiculo(Vehiculo*);
	void ListarVehiculos();


	/*Getters*/
	int getCuil() const;
	const vector<Vehiculo*>& getVehiculos() const;
	~Supervisor();
};

#endif /* SUPERVISOR_H_ */

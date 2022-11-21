
#include "Persona.h"

/*Constructores*/
Persona::Persona(int dni, string nombre, int tel,  Direccion *dire) : dni(dni), nombre(nombre), telefono(tel), direccion(dire) { }
Persona::Persona(const Persona &p) : dni(p.dni), nombre(p.nombre), telefono(p.telefono), direccion(p.direccion) {}
/*Getters*/
int Persona::getDni() const {
	return dni;
}
const string& Persona::getNombre() const {
	return nombre;
}
int Persona::getTelefono() const {
	return telefono;
}
const Direccion* Persona::getDireccion() const {
	return direccion;
}
Persona::~Persona() {
	// TODO Auto-generated destructor stub
}

ostream & operator<<(ostream& salida, const Persona &p) {
	salida<< "DNI: "<< p.getDni() << " - Nombre: "<<p.getNombre()<<endl;
	salida<< "Direccion: "<< *(p.getDireccion());
	salida<< "Telefono: "<< p.getTelefono() <<endl;
	return salida;
}


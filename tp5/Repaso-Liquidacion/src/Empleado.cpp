
#include "Empleado.h"

Empleado::Empleado(int dni, string nom, string dire, Fecha nac, Fecha in, float sueldo):
	dni(dni),nombre(nom),direccion(dire),fechaNac(nac),fechaIngreso(in), sueldoBasico(sueldo) {}

Empleado::~Empleado() {}

//Getters-----------------------------------------
unsigned int Empleado::getDni() const {
	return dni;
}
const string& Empleado::getNombre() const {
	return nombre;
}
const string& Empleado::getDireccion() const {
	return direccion;
}
const Fecha& Empleado::getFechaNac() const {
	return fechaNac;
}
const Fecha& Empleado::getFechaIngreso() const {
	return fechaIngreso;
}
float Empleado::getSueldoBasico() const {
	return sueldoBasico;
}
//FIN Getters------------------------------------

int Empleado::Antiguedad() {
	Fecha fechaHoy = Fecha();
	Fecha fechaAux = Fecha(fechaHoy.getAnio(), fechaIngreso.getMes(), fechaIngreso.getDia());
	int diferenciaAnios = fechaHoy.getAnio() - fechaIngreso.getAnio();
	return (fechaHoy - fechaAux >= 0) ? diferenciaAnios : diferenciaAnios - 1;
}

string Empleado::TipoEmpleado() {
	return (typeid(this))==typeid(Tecnico) ? "Técnico" : "Administrativo" ;
}

float Empleado::Retenciones() {
	return getJubilacion()/100 + OBRASOCIAL/100;
}

float Empleado::SueldoNeto() {
	return SueldoBruto() - Retenciones();
}

ostream& operator<<(ostream& salida, const Empleado* emp) {

	return emp->imprimir_en(salida);
}


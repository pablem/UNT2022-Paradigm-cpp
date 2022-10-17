
#include "Mascota.h"
#include "Control.h"
#include <vector>

Mascota::Mascota(string nom,string r,Fecha fecha) {
	this->nombre = nombre;
	this->raza = raza;
	this->fechaNac = fecha;
}

const string& Mascota::getNombre() const {
	return nombre;
}

const string& Mascota::getRaza() const {
	return raza;
}

const vector<Control*>& Mascota::getControles() const {
	return controles;
}

const Fecha& Mascota::getFechaNac() const {
	return fechaNac;
}

const Fecha& Mascota::getProxControl() const {
	return proxControl;
}

void Mascota::cambiarProxControl(const Fecha &proxControl) {
	this->proxControl = proxControl;
}

void Mascota::nuevoControl(float precio, string descripcion,Fecha fechaControl) {
	Control *nuevo = new Control(precio,descripcion,fechaControl);
	this->controles.insert(this->controles.end(),nuevo);
	this->proxControl = Fecha(fechaControl.getDia(),fechaControl.getMes(),fechaControl.getAnio()+1);
}//Establece por defecto el proximo control para dentro de 1 año
//pero se lo puede cambiar con el método cambiar proxControl

bool Mascota::hayControlAhora() {
	Fecha hoy = Fecha();//???
	Fecha &control = this->proxControl;
	return (control-hoy)<5;
}

float Mascota::calcularGastos(int anio, int mes) {
	float gastos = 0;
	vector<Control*>::iterator it;
	for (it=this->controles.begin() ; it!=this->controles.end(); ++it) {
		if((*it)->getFecha().getAnio() == anio && (*it)->getFecha().getMes() == mes) {
			gastos += (*it)->getPrecio();
		}
	}
	return gastos;
}

float Mascota::calcularGastos(){
	float gastos = 0;
	for(Control *control : this->controles) {
		gastos += control->getPrecio();
	}
	return gastos;
}

void Mascota::listarInfo() {
	cout<<"             Información de la mascota"<<endl;
	cout << "  -------------------------------------------" <<endl;
	cout<<this<<endl;
	cout<<"             Historial de Controles"<<endl;
	cout<< "  -------------------------------------------" <<endl;
	for(Control *ctrl : this->controles) {
		cout<<ctrl<<endl;
	}
}

Mascota::~Mascota() {
	vector<Control*>::iterator it;
	for (it=controles.begin(); it!=controles.end(); ++it) {
		delete (*it);
	}
	controles.clear();
}

ostream & operator<<(ostream& salida, Mascota *mascota) {
	salida<<"Nombre: "<<mascota->getNombre()<<endl;
	salida<<"Raza: "<<mascota->getRaza()<<endl;
	salida<<"Fecha de Nacimiento: "<<mascota->getFechaNac()<<endl;
	return salida;
}


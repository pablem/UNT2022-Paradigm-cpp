
#ifndef MASCOTA_H_
#define MASCOTA_H_

#include "Control.h"
#include "Fecha.h"
#include <vector>
#include <iostream>
using namespace std;

class Mascota {
private:
	string nombre;
	string raza;
	Fecha fechaNac;
	Fecha proxControl;
	vector<Control*> controles;
public:
	Mascota(string nombre,string raza,Fecha fechaNac);
	~Mascota();
	const vector<Control*>& getControles() const;
	const Fecha& getFechaNac() const;
	const string& getNombre() const;
	const string& getRaza() const;
	const Fecha& getProxControl() const;

	void cambiarProxControl(const Fecha &proxControl);

	void nuevoControl(float,string,Fecha);
	void listarInfo();
	bool hayControlAhora();
	float calcularGastos();
	float calcularGastos(int anio, int mes);


};

ostream & operator<<(ostream&,Mascota*);

#endif /* MASCOTA_H_ */

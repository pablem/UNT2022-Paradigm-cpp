#include  <iostream>
using namespace std;

class Direccion {

private:
	string provincia;
	string localidad;
	int codPostal;
	string calle;
	int numero;
	int piso;
	string depto;

public:

	Direccion() {
		this->provincia = "";
		this->localidad = "";
		this->codPostal = 0;
		this->calle = "";
		this->numero = 0;
		this->piso = 0;
		this->depto = "";
	}
	Direccion(string pr, string l, int co, string ca, int n, int pi, string d) :
		provincia(pr), localidad(l), codPostal(co), calle(ca), numero(n), piso(pi), depto(d) {}

	Direccion(string pr, string l, int co, string ca, int n) :
		provincia(pr), localidad(l), codPostal(co), calle(ca), numero(n) {
		this->piso = 0;
		this->depto = "";
	}
	Direccion(const Direccion &d) :
			provincia(d.provincia), localidad(d.localidad), codPostal(d.codPostal),
			calle(d.calle), numero(d.numero), piso(d.piso), depto(d) {}
	~Direccion() {
		// TODO Auto-generated destructor stub
	}
};


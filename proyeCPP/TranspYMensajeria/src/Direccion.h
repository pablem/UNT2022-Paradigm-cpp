
#ifndef DIRECCION_H_
#define DIRECCION_H_

#include <iostream>
#include <vector>

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
	Direccion(string prov, string localidad, int cp, string calle, int numero, int piso, string depto)
		: provincia(prov), localidad(localidad), codPostal(cp),
		calle(calle), numero(numero), piso(piso), depto(depto) {}

	Direccion(string prov, string localidad, int cp, string calle, int numero)
		: provincia(prov), localidad(localidad), codPostal(cp),
		calle(calle), numero(numero), piso(0), depto("") {}

	Direccion(const Direccion &depto)
		: provincia(depto.provincia), localidad(depto.localidad), codPostal(depto.codPostal),
		calle(depto.calle), numero(depto.numero), piso(depto.piso), depto(depto.depto) {}


	/*Getters*/
	const string& getProvincia() const {
		return provincia;
	}
	const string& getLocalidad() const {
		return localidad;
	}
	int getCodPostal() const {
		return codPostal;
	}
	const string& getCalle() const {
		return calle;
	}
	int getNumero() const {
		return numero;
	}
	int getPiso() const {
		return piso;
	}
	const string& getDepto() const {
		return depto;
	}
	~Direccion() {
		// TODO Auto-generated destructor stub
	}
};

ostream & operator<<(ostream& salida, const Direccion &d);

#endif /* DIRECCION_H_ */

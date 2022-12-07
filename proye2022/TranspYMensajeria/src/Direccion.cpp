
#include "Direccion.h"

ostream & operator<<(ostream& salida, const Direccion &d) {
	salida<<d.getCalle()<<" "<<d.getNumero();
	if(d.getPiso()!=0)
		salida<<", Dto. "<<d.getPiso();
	salida<<d.getDepto()<<", "<<d.getLocalidad()<<", "<<d.getProvincia();
	salida<<", CP "<<d.getCodPostal()<<"."<<endl;
	return salida;
}

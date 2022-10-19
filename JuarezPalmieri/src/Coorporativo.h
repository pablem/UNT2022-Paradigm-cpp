/*
 * Coorporativo.h
 *
 *  Created on: 17 oct. 2022
 *      Author: Pablo
 */

#ifndef COORPORATIVO_H_
#define COORPORATIVO_H_

#include "Evento.h"

class Coorporativo: public Evento {
private:
	string institucion;
	bool beneficio;
public:
	Coorporativo(int pers, string desc, Fecha fecha,string inst, bool benf);
	virtual ~Coorporativo();
	bool isBeneficio() const;
	const string& getInstitucion() const;

	float MontoTotal();
//	void ListarInformacion();
	ostream& print_subclase(ostream& salida);
};

#endif /* COORPORATIVO_H_ */

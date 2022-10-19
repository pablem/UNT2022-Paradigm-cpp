/*
 * Personal.h
 *
 *  Created on: 17 oct. 2022
 *      Author: Pablo
 */

#ifndef PERSONAL_H_
#define PERSONAL_H_

#include "Evento.h"

class Personal: public Evento {
private:
	int persAdicionales;
public:
	Personal(int pers, string desc, Fecha fecha, int persAd);
	virtual ~Personal();
	int getPersAdicionales() const;

	float MontoTotal();
	ostream& print_subclase(ostream& salida);
};

#endif /* PERSONAL_H_ */

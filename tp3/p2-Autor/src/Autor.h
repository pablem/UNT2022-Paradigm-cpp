/*
 * Autor.h
 *
 *  Created on: 19 sept. 2022
 *      Author: Pablo
 */

#ifndef AUTOR_H_
#define AUTOR_H_

#include <iostream>
using namespace std;

class Autor {
	string nombre;
	string biografia;
	int edad;
public:
	Autor();
//	virtual ~Autor();
	const string& getBiografia() const;
	const string& getNombre() const;
	int getEdad() const;
};

#endif /* AUTOR_H_ */

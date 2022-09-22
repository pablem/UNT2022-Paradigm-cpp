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
	Autor(string, string, int);
	const string& getBiografia() const;
	const string& getNombre() const;
	int getEdad() const;

	~Autor();
};

//Sobrecarga del operador de insercion de flujo para
//escribir en un flujo de salida la información de un autor
ostream & operator<<(ostream& salida, Autor *autor);

#endif /* AUTOR_H_ */

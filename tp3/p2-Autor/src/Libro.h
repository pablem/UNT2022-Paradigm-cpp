#ifndef LIBRO_H_
#define LIBRO_H_

#include "Autor.h"

#include <iostream>
using namespace std;

enum Categoria { Clasico, Policial, Novela, Desonocido };

class Libro {

	static int librosCreados;
	static const float IVA;

	int codigo;
	string titulo;
	string descripcion;
	Autor *autor;
	Categoria categoria;
	float precio;

protected:
	float getPrecioBase();

public:
	Libro();
	Libro(string tit, string desc, Autor *aut, Categoria cat, float prec);
	float calcularPrecioVenta();
	void listarInformacion();
	virtual ~Libro();
	void getBiografíaAutor();

};

#endif /* LIBRO_H_ */

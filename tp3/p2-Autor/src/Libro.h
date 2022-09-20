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

public:
	Libro();
	Libro(string tit, string desc, Autor *aut, Categoria cat, float prec);
	
	
	float getPrecioBase();
	void listarInformacion();
	void getBiografíaAutor();

	//geters
	const Autor*& getAutor() const;
	Categoria getCategoria() const;
	int getCodigo() const;
	const string& getDescripcion() const;
	const string& getTitulo() const;

	virtual ~Libro();
};

//Sobrecarga del operador de insercion de  flujo para
//escribir en un flujo de salida la información de un libro
ostream & operator<<(ostream& salida, Libro *libro);

#endif /* LIBRO_H_ */

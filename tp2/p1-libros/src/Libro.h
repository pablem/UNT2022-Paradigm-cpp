#include <iostream>

#ifndef LIBRO_H_
#define LIBRO_H_

using namespace std;

enum Categoria { Clasico, Policial, Novela };

class Libro {

	int codigo;
	string titulo;
	string descripcion;
	string autor;
	Categoria categoria;
	float precio;
	static const float IVA;

protected:
	float getIVA();
	float getPrecioBase();

public:
	Libro(int cod, string tit, string desc, string aut, Categoria cat, float prec);
	float calcularPrecioVenta();
	void listarInformacion();
	virtual ~Libro();
};

#endif /* LIBRO_H_ */

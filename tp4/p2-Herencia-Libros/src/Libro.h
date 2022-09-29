#ifndef LIBRO_H_
#define LIBRO_H_

#include "Autor.h"
#include "Fecha.h"

#include <iostream>
using namespace std;

enum Categoria { Clasico, Policial, Novela, Desonocido };

class Libro {
protected:
	static int librosCreados;
	static const float IVA;
	int codigo;
	string titulo;
	string descripcion;
	Fecha fechaPublicacion;
	Autor *autor;
	Categoria categoria;
	float precioBase;
public:
	//constr-destr
	Libro(string titu, string descr, Autor *aut, Categoria cat, float prec); //para simplificar se usa fecha del sistema
	virtual ~Libro();

	//geters
	int getCodigo() const;
	const string& getTitulo() const;
	const string& getDescripcion() const;
	const Fecha& getFechaPublicacion() const;
//	const Autor*& getAutor() const;//??
	Autor *getAutor();
	Categoria getCategoria() const;
	float getPrecioBase() const;

	//métodos
	void getBiografiaAutor();
	virtual float calcularPrecio();// Funcion virtual pura
	virtual ostream& printSubclase(ostream& salida)const = 0;
};

class eBook : public Libro {
public:
	eBook(string titu, string descr, Autor *aut, Categoria cat, float prec);
	~eBook();
	float calcularPrecio();
	ostream& printSubclase(ostream& salida) const;
};

class Impreso : public Libro {
private:
	bool esDeBolsillo;
public:
	Impreso(string titu, string descr, Autor *aut, Categoria cat, float prec, bool bolsi);
	~Impreso();
	bool isDeBolsillo() const;
	float calcularPrecio();
	ostream& printSubclase(ostream& salida) const;
};

//Sobrecarga del operador de insercion de  flujo para
//escribir en un flujo de salida la información de un libro
ostream & operator<<(ostream& salida, Libro *libro);

#endif /* LIBRO_H_ */

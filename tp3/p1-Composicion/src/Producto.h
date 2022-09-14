#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;

#ifndef PRODUCTO_H_
#define PRODUCTO_H_

class Producto {
	int codigo;
	string descripcion;
	float precioBase;
	static const float IVA = 0.22;

public:
	Producto();						//...por defecto c/codigo=000
	Producto(int ,string, float );	//...sobrecargado c/parámetros
	Producto(const Producto &);		//...copia
	float calcularPrecio();
	void mostrar();
//	~Producto(); //virtual?
	int getCodigo() const;
	string getDescripcion() const;
	float getPrecioBase() const;

};

#endif /* PRODUCTO_H_ */

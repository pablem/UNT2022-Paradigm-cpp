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
	static const float IVA = 1.15;

public:
	Producto();						//...por defecto c/codigo=000
	Producto(int ,string, float );	//...sobrecargado c/parámetros
	Producto(const Producto &);		//...copia
	float calcularPrecio();
	void mostrar();
	~Producto(); //virtual?			//destructor

	int getCodigo() const;
//	{
//		return codigo;
//	}
	const string& getDescripcion() const {
		return descripcion;
	}
	float getPrecioBase() const {
		return precioBase;
	}
};

#endif /* PRODUCTO_H_ */

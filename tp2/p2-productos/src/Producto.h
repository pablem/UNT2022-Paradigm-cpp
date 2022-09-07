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

public:
	Producto();
	float calcularPrecio();
	void mostrar();
	virtual ~Producto();

	int getCodigo() const {
		return codigo;
	}
	void setCodigo(int codigo) {
		this->codigo = codigo;
	}
	const string& getDescripcion() const {
		return descripcion;
	}
	void setDescripcion(const string& descripcion) {
		this->descripcion = descripcion;
	}
	float getPrecioBase() const {
		return precioBase;
	}
	void setPrecioBase(float precioBase) {
		this->precioBase = precioBase;
	}
};

#endif /* PRODUCTO_H_ */

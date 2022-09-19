#include <iostream>
#include <algorithm>

using namespace std;

#ifndef PRODUCTO_H_
#define PRODUCTO_H_

class Producto {
private:
	static int productosCreados;
//	static const float IVA = 0.21; //error con el float
	static const int IVA = 1;
	int codigo;
	string descripcion;
	float precioBase;

public:
	Producto();						//...por defecto c/codigo=000
	Producto(string, float );	//...sobrecargado c/parámetros
	Producto(const Producto &);		//...copia
	float calcularPrecio();
	void mostrar();
//	~Producto(); //virtual?



//	int getCodigo() const;
//	float getPrecioBase() const;
//	const string& getDescripcion() const;
//
	void setDescripcion(const string &descripcion);
	void setPrecioBase(float precioBase);

};

#endif /* PRODUCTO_H_ */

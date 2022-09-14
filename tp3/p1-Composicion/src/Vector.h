/* Vector.h */

#ifndef VECTOR_H_
#define VECTOR_H_
#include "Producto.h"
#include <iostream>
using namespace std;

class Vector{

	Producto *productos;
	int max;
	bool reservarMemoria(int dim);

public:
	Vector();
	Vector(int,Producto *);
	Vector(const Vector &);
	~Vector();
	int getCapacidad();
	Producto &operator[](int pos)const;
};
#endif /* VECTOR_H_ */

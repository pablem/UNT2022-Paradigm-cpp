/* Vector.h */

#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
using namespace std;

typedef int item;
const item INDEFINIDO = -9999;

class Vector{
	item *arreglo;
	int max;
	bool reservarMemoria(int dim);

public:
	Vector();
	Vector(int,item);
	Vector(const Vector &);
	~Vector();
	int getCapacidad();
	item &operator[](int pos)const;
};

istream& operator>>(istream& entra, Vector &v);
ostream& operator<<(ostream& sale, Vector &v);

#endif /* VECTOR_H_ */

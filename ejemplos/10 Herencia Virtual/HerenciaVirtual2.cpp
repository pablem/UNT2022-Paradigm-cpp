//============================================================================
// Name        : HerenciaVirtual2.cpp
// Author      : CW
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class A{
		public:
			int i;
};

class B : virtual public A {};
class C : virtual public A {};

class X : public B, public C{};

int main() {
			X x;
			x.i = 10;		// es ambiguo
			x.B::i = 10;	// no es ambiguo


//	Nota: Si se quita la palabra virtual, la asignaci�n x.i = 10
//ser�a ambigua, ya que podr�a corresponder a x.B::i � a x.C::i

	return 0;
}
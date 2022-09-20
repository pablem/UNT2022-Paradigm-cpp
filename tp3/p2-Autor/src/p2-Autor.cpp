//============================================================================
// Name        : p2-Autor.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Libro.h"

#include <iostream>
using namespace std;

int main() {

	Autor aut("Tolkien","Nació en Inglaterra...A los 20 años fue a la guerra...",87);
	Libro lib("TLOTR","Novela de fantasía épia",&aut,Categoria::Novela,3500);

	lib.getBiografíaAutor();

	return 0;
}

//adicionales: hacer iolibro y/o ioautores

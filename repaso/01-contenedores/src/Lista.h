/*
 * Lista.h
 *
 *  Created on: 5 dic. 2022
 *      Author: Pablo
 */

#ifndef LISTA_H_
#define LISTA_H_
#include <iostream>
using namespace std;

typedef int item;
#define INDEFINIDO -9999;

class Nodo {

private:
	item dato;
	Nodo *siguiente;
public:

	Nodo(item d, Nodo *s = NULL) : dato(d), siguiente(s) {}
	Nodo(Nodo &n) : dato(n.dato), siguiente(n.siguiente) {}
	item getDato() const { return dato; }
	Nodo* getSiguiente() { return siguiente; }
	void setDato(item dato) { this->dato = dato; }
	void setSiguiente(Nodo *siguiente) { this->siguiente = siguiente; }
	virtual ~Nodo() {};
};

class Lista {

private:
	Nodo *lista;
	int longitud;

public:
	Lista() : lista(NULL), longitud(0) {};

	void insertar(item dato) {
		Nodo *nuevo = new Nodo(dato,lista);
		lista = nuevo;
		longitud++;
	};

	void borrar() {
		if(!esVacia()) {
			Nodo *aux = lista;
			lista = lista->getSiguiente();
			delete aux;
			longitud--;
		}
	};

	item elemento() {
		if (!esVacia()) {
			return lista->getDato();
		} else {
			return INDEFINIDO;
		}
	};

	int cantidad() { return longitud; }

	bool esVacia() { return this->longitud == 0; }

	virtual ~Lista() {
		for (int i = 0; i < longitud; ++i) {
			borrar();
		}
	};

	void escribir() {
		cout<<"Lista: ";
		for (Nodo *aux = lista; aux != NULL; aux = aux->getSiguiente()) {
			cout<<aux->getDato()<<" ";
		}
		cout<<endl;
	};

	friend class Iterador;
};

#endif /* LISTA_H_ */

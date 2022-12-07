

#ifndef ENVIO_H_
#define ENVIO_H_

#include <iostream>
#include <vector>
#include "Fecha.h"
#include "Persona.h"
#include "Mercancia.h"
#include "Sobre.h"
#include "Paquete.h"

using namespace std;

enum tipoEnvio{sobre, paquete};

class Envio {
private:
	static int enviosCreados;	//Autonumerico
	int cod;					//Se asigna automaticamente dentro del constructor
	float precio;
	Fecha *fecha_envio;
	Persona *cliente;
	Persona *destinatario;
	Mercancia *mercancia;

	Mercancia *CrearMercancia(tipoEnvio tipo, string descripcion, bool es_asegurado, bool es_recorrido_largo, float caracteristicas);

public:
	Envio(tipoEnvio tipo, Fecha *fecha, Persona *origen, Persona *dest, string descripcion, bool es_asegurado, bool es_recorrido_largo, float caracteristicas);
	void ActualizarPrecio();
	void EmitirDetalles();


	/*Getters*/
	int getCod() const;
	float getPrecio() const;
	const Fecha* getFechaEnvio() const;
	const Persona* getCliente() const;
	const Persona* getDestinatario() const;
	const Mercancia* getMercancia() const;
	virtual ~Envio();
};

#endif /* ENVIO_H_ */

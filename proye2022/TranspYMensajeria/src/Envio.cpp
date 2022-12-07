

#include "Envio.h"

int Envio::enviosCreados = 0;

Envio::Envio(tipoEnvio tipo, Fecha *fecha, Persona *origen, Persona *dest, string descripcion, bool es_asegurado, bool es_recorrido_largo, float caracteristicas)
	: fecha_envio(fecha), cliente(origen), destinatario(dest) {
	this->cod = ++enviosCreados;
	this->mercancia = CrearMercancia(tipo, descripcion, es_asegurado, es_recorrido_largo, caracteristicas);
	this->ActualizarPrecio();
}

Mercancia *Envio::CrearMercancia(tipoEnvio tipo, string descripcion, bool es_asegurado, bool es_recorrido_largo, float caracteristicas) {
	Mercancia *nueva;
	switch (tipo) {
		case sobre: nueva = new Sobre(descripcion,es_asegurado,es_recorrido_largo,caracteristicas); break;
		case paquete: nueva = new Paquete(descripcion,es_asegurado,es_recorrido_largo,caracteristicas); break;
	}
	return nueva;
}

void Envio::ActualizarPrecio() {
	this->precio = this->mercancia->PrecioTotal();
}

void Envio::EmitirDetalles() {
	cout<<"Envio Nro. "<<cod<<endl;
	cout<<"Cliente DNI: "<<cliente->getDni()<<endl;
	cout<<"Tipo de Mercancía: "<<mercancia->getTipo()<<endl;
	cout<<"Precio de envío: $"<<precio<<endl;
}


/*Getters*/
int Envio::getCod() const {
	return cod;
}
float Envio::getPrecio() const {
	return precio;
}
const Fecha* Envio::getFechaEnvio() const {
	return fecha_envio;
}
const Persona* Envio::getCliente() const {
	return cliente;
}
const Persona* Envio::getDestinatario() const {
	return destinatario;
}
const Mercancia* Envio::getMercancia() const {
	return mercancia;
}

Envio::~Envio() {
	delete (mercancia);
}


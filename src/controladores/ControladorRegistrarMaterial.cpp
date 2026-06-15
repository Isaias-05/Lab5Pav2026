#include "ControladorRegistrarMaterial.h"
#include "ManejadorMaterial.h"
#include "Libro.h"
#include "Revista.h"

ControladorRegistrarMaterial::ControladorRegistrarMaterial() {}
ControladorRegistrarMaterial::~ControladorRegistrarMaterial() {}

void ControladorRegistrarMaterial::registrarMaterial(string codigo, string titulo, int anioPublicacion, TipoMaterial tipo) {
	this->codigo = codigo;
	this->titulo = titulo;
	this->anioPublicacion = anioPublicacion;
	this->tipo = tipo;
}

DtLibro ControladorRegistrarMaterial::ingresarDatosLibro(string autor, int cantidadPaginas) {
	this->autor = autor;
	this->cantidadPaginas = cantidadPaginas;
	return DtLibro(codigo, titulo, anioPublicacion, autor, cantidadPaginas);
}

DtRevista ControladorRegistrarMaterial::ingresarDatosRevista(int numeroEdicion, bool publicacionMensual) {
	this->numeroEdicion = numeroEdicion;
	this->publicacionMensual = publicacionMensual;
	return DtRevista(codigo, titulo, anioPublicacion, numeroEdicion, publicacionMensual);
}

void ControladorRegistrarMaterial::confirmar() {
	ManejadorMaterial* manejadorMaterial = ManejadorMaterial::getInstancia();
	if (tipo == TipoMaterial::TM_LIBRO) {
		manejadorMaterial->agregarMaterial(new Libro(codigo, titulo, anioPublicacion, autor, cantidadPaginas));
	}
	else if (tipo == TipoMaterial::TM_REVISTA) {
		manejadorMaterial->agregarMaterial(new Revista(codigo, titulo, anioPublicacion, numeroEdicion, publicacionMensual));
	}
}
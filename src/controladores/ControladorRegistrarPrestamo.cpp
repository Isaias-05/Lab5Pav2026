#include "ControladorRegistrarPrestamo.h"

ControladorRegistrarPrestamo::ControladorRegistrarPrestamo() {}
ControladorRegistrarPrestamo::~ControladorRegistrarPrestamo() {}

DtLector ControladorRegistrarPrestamo::obtenerLector(string id) {
	// Implementar lógica aquí
	Lector * lector = dynamic_cast<Lector*>(ManejadorUsuario::getInstancia()->obtenerUsuario(id));
	if (lector == nullptr) {
		throw invalid_argument("Lector no encontrado");
	}
	this->idLector = id;
	DtLector dtLector = lector->getDtLector();
	return dtLector;
}

DtMaterial ControladorRegistrarPrestamo::obtenerMaterial(string codigo) {
	// Implementar lógica aquí
	Material * material = dynamic_cast<Material*>(ManejadorMaterial::getInstancia()->obtenerMaterial(codigo));
	if (material == nullptr) {
		throw invalid_argument("Material no encontrado");
	}
	this->codigoMaterial = codigo;
	DtMaterial dtMaterial = material->getDtMaterial();
	return dtMaterial;
}

DtPrestamo ControladorRegistrarPrestamo::registrarPrestamo(DtFecha fecha, int cantidad) {
	// Implementar lógica aquí
	this->fechaPrestamo = fecha;
	this->cantDias = cantidad;
	return DtPrestamo(idLector, codigoMaterial, fechaPrestamo, cantDias);
}

void ControladorRegistrarPrestamo::confirmar() {
	// Implementar lógica aquí
	ManejadorUsuario * manejadorUsuario = ManejadorUsuario::getInstancia();
	Lector * lector = dynamic_cast<Lector*>(manejadorUsuario->obtenerUsuario(idLector));
	ManejadorMaterial * manejadorMaterial = ManejadorMaterial::getInstancia();
	Material * material = dynamic_cast<Material*>(manejadorMaterial->obtenerMaterial(codigoMaterial));
	Prestamo * prestamo = new Prestamo(idLector, material, fechaPrestamo, cantDias);
	lector->agregarPrestamo(prestamo);
}

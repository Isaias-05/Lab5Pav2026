#include "ControladorConsultarPrestamosDeLector.h"

ControladorConsultarPrestamosDeLector::ControladorConsultarPrestamosDeLector() {}
ControladorConsultarPrestamosDeLector::~ControladorConsultarPrestamosDeLector() {}

DtPrestamoLector ControladorConsultarPrestamosDeLector::obtenerLector(string idLector) {
	// Implementar lógica aquí
	Lector * lector = dynamic_cast<Lector*>(ManejadorUsuario::getInstancia()->obtenerUsuario(idLector));
	DtPrestamoLector dtPrestamoLector = lector->getDtPrestamoLector();
	return DtPrestamoLector();
}

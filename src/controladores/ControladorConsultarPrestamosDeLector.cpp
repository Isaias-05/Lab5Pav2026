#include "ControladorConsultarPrestamosDeLector.h"

ControladorConsultarPrestamosDeLector::ControladorConsultarPrestamosDeLector() {}
ControladorConsultarPrestamosDeLector::~ControladorConsultarPrestamosDeLector() {}

DtPrestamoLector ControladorConsultarPrestamosDeLector::obtenerLector(string idLector) {
	// Implementar lógica aquí
	Lector * lector = dynamic_cast<Lector*>(ManejadorUsuario::getInstancia()->obtenerUsuario(idLector));
	if (lector == nullptr) {
		throw invalid_argument("Lector no encontrado");
	}
	DtPrestamoLector dtPrestamoLector = lector->getDtPrestamoLector();
	return dtPrestamoLector;
}

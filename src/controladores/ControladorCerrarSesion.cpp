#include "ControladorCerrarSesion.h"

ControladorCerrarSesion::ControladorCerrarSesion() {}

ControladorCerrarSesion::~ControladorCerrarSesion() {}

void ControladorCerrarSesion::cerrarSesion() {
	Sesion* sesionActual = Sesion::getInstancia();
	sesionActual->setUsuario(nullptr);
}

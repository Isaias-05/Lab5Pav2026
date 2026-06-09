#include "ControladorRegistrarLector.h"

ControladorRegistrarLector::ControladorRegistrarLector() {}

ControladorRegistrarLector::~ControladorRegistrarLector() {}

DtLector* ControladorRegistrarLector::registrarLector(string idUsuario, string nombre, string contrasenia, DtFecha fechaNacimiento) {
    return new DtLector(idUsuario, nombre, contrasenia, fechaNacimiento);
}

void ControladorRegistrarLector::altaLector(DtLector* dtLector) {
    Lector* lector = new Lector(dtLector->getId(), dtLector->getNombre(), dtLector->getContrasenia(), dtLector->getFechaNacimiento());
    ManejadorUsuario::getInstancia()->agregarUsuario(lector);
}
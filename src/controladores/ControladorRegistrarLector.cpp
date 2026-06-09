#include "ControladorRegistrarLector.h"

ControladorRegistrarLector::ControladorRegistrarLector() {}

ControladorRegistrarLector::~ControladorRegistrarLector() {}

DtLector* ControladorRegistrarLector::registrarLector(string idUsuario, string nombre, string contrasenia, DtFecha fechaRegistro) {
    return new DtLector(idUsuario, nombre, contrasenia, fechaRegistro);
}

void ControladorRegistrarLector::altaLector(DtLector* dtLector) {
    Lector* lector = new Lector(dtLector->getId(), dtLector->getNombre(), dtLector->getContrasenia(), dtLector->getFechaRegistro(), vector<Prestamo*>());
    ManejadorUsuario::getInstancia()->agregarUsuario(lector);
}
#include "ControladorRegistrarLector.h"
#include "ManejadorUsuario.h"
#include "Lector.h"

ControladorRegistrarLector::ControladorRegistrarLector(){}
ControladorRegistrarLector::~ControladorRegistrarLector(){}

DtLector ControladorRegistrarLector::registrarLector(string id, string nombre, string contrasenia, DtFecha fechaRegistro) {
    this->id = id;
    this->nombre = nombre;
    this->contrasenia = contrasenia;
    this->fechaRegistro = fechaRegistro;

    return DtLector(id, nombre, contrasenia, fechaRegistro);
}

void ControladorRegistrarLector::altaLector() {
    ManejadorUsuario* manejadorUsuario = ManejadorUsuario::getInstancia();
    Lector* nuevoLector = new Lector(this->id, this->nombre, this->contrasenia, this->fechaRegistro);
    manejadorUsuario->agregarUsuario(nuevoLector);
}
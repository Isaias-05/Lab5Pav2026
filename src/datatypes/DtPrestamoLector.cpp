#include "DtPrestamoLector.h"

DtPrestamoLector::DtPrestamoLector() {}

DtPrestamoLector::DtPrestamoLector(string nombreLector, DtMaterial * materialesPrestados) {
    this->nombreLector = nombreLector;
    this->materialesPrestados = materialesPrestados;
}

DtPrestamoLector::~DtPrestamoLector() {
    delete this->materialesPrestados;
}

string DtPrestamoLector::getNombreLector() {
    return this->nombreLector;
}

DtMaterial * DtPrestamoLector::getMaterialesPrestados() {
    return this->materialesPrestados;
}
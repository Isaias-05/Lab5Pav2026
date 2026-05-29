#include "DtPrestamoLector.h"

DtPrestamoLector::DtPrestamoLector() {}

DtPrestamoLector::DtPrestamoLector(string nombreLector, set<DtMaterial> materialesPrestados) {
    this->nombreLector = nombreLector;
    this->materialesPrestados = materialesPrestados;
}

DtPrestamoLector::~DtPrestamoLector() {}

string DtPrestamoLector::getNombreLector() {
    return nombreLector;
}

set<DtMaterial> DtPrestamoLector::getMaterialesPrestados() {
    return materialesPrestados;
}
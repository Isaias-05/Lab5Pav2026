#include "DtPrestamoLector.h"

DtPrestamoLector::DtPrestamoLector() {}

DtPrestamoLector::DtPrestamoLector(string nombreLector, vector<DtMaterialPrestado> materialesPrestados) {
    this->nombreLector = nombreLector;
    this->materialesPrestados = materialesPrestados;
}

DtPrestamoLector::~DtPrestamoLector() {}

string DtPrestamoLector::getNombreLector() {
    return this->nombreLector;
}

vector<DtMaterialPrestado> DtPrestamoLector::getMaterialesPrestados() {
    return this->materialesPrestados;
}

string DtPrestamoLector::toString() const {
    string retorno = "Nombre del lector: " + nombreLector + "\nMateriales del lector:\n";
    for (DtMaterialPrestado material : materialesPrestados) {
        retorno += material.toString() + "\n";
    }
    return retorno;
}
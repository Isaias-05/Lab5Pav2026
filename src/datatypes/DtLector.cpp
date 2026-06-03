#include "DtLector.h"

DtLector::DtLector(){}

DtLector::DtLector(string nombre, vector<DtMaterialPrestado> materialesPrestados) {
    this->nombre = nombre;
    this->materialesPrestados = materialesPrestados;
}

DtLector::~DtLector(){}

string DtLector::getNombre(){
    return this->nombre;
}

const vector<DtMaterialPrestado>& DtLector::getMaterialesPrestados(){
    return this->materialesPrestados;
}

size_t DtLector::getTopeMaterialesPrestados(){
    return this->materialesPrestados.size();
}
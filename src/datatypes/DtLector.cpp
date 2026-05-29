#include "DtLector.h"

DtLector::DtLector(){}

DtLector::DtLector(string nombre, DtMaterialPrestado * materialesPrestados, int topeMaterialesPrestados) {
    this->nombre = nombre;
    this->topeMaterialesPrestados = topeMaterialesPrestados;
    for (int i = 0; i < topeMaterialesPrestados; i++) {
        this->materialesPrestados[i] = materialesPrestados[i];
    }
}

DtLector::~DtLector(){}

string DtLector::getNombre(){
    return this->nombre;
}

DtMaterialPrestado * DtLector::getMaterialesPrestados(){
    return this->materialesPrestados;
}

int DtLector::getTopeMaterialesPrestados(){
    return this->topeMaterialesPrestados;
}
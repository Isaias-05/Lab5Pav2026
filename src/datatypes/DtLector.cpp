#include "DtLector.h"

DtLector::DtLector(){}

DtLector::DtLector(string nombre, DtMaterialPrestado * materialesPrestados){
    this->nombre = nombre;
    this->materialesPrestados = materialesPrestados;
}

DtLector::~DtLector(){}

string DtLector::getNombre(){
    return this->nombre;
}

DtMaterialPrestado * DtLector::getMaterialesPrestados(){
    return this->materialesPrestados;
}
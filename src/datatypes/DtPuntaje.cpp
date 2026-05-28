#include "DtPuntaje.h"

DtPuntaje::DtPuntaje() {}

DtPuntaje::DtPuntaje(string idLector, string codigoMaterial, int valor) {
    this->idLector = idLector;
    this->codigoMaterial = codigoMaterial;
    this->valor = valor;
}

DtPuntaje::~DtPuntaje() {}

string DtPuntaje::getIdLector() {
    return this->idLector;
}

string DtPuntaje::getCodigoMaterial() {
    return this->codigoMaterial;
}

int DtPuntaje::getValor() {
    return this->valor;
}
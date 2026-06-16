#include "DtPrestamo.h"

DtPrestamo::DtPrestamo() {}

DtPrestamo::DtPrestamo(string idLector, string codigoMaterial, DtFecha fechaPrestamo, int cantDias) {
    this->idLector = idLector;
    this->codigoMaterial = codigoMaterial;
    this->fechaPrestamo = fechaPrestamo;
    this->cantDias = cantDias;
}

DtPrestamo::~DtPrestamo() {}

string DtPrestamo::getIdLector() {
    return this->idLector;
}

string DtPrestamo::getCodigoMaterial() {
    return this->codigoMaterial;
}

DtFecha DtPrestamo::getFechaPrestamo() {
    return this->fechaPrestamo;
}

int DtPrestamo::getCantDias() {
    return this->cantDias;
}

string DtPrestamo::toString() {
    return "Prestamo[IdLector: " + idLector + ", CodigoMaterial: " + codigoMaterial + ", FechaPrestamo: " + fechaPrestamo.toString() + ", CantDias: " + to_string(cantDias) + "]";
}
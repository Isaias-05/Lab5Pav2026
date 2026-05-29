#include "Lector.h"
#include "DtLector.h"
#include "DtMaterialPrestado.h"

Lector::Lector(): Usuario() {
    this->fechaRegistro = DtFecha();
    this->topePrestamos = 0;
}

Lector::Lector(string id, string nombre, string contrasenia, DtFecha fechaRegistro): Usuario(id, nombre, contrasenia) {
    this->fechaRegistro = fechaRegistro;
    this->topePrestamos = 0;
}

Lector::~Lector() {
    for (int i = 0; i < topePrestamos; i++) {
        delete prestamos[i];
    }
}

DtFecha Lector::getFechaRegistro() {
    return fechaRegistro;
}

void Lector::setFechaRegistro(DtFecha fechaRegistro) {
    this->fechaRegistro = fechaRegistro;
}

void Lector::agregarPrestamo(Prestamo * prestamo) {
    prestamos[topePrestamos] = prestamo;
    topePrestamos ++;
}

DtLector Lector::getDtLector() {
    DtMaterialPrestado materialesPrestados[MAX_MATERIALES_PRESTADOS];
    int topeMaterialesPrestados = 0;
    for (Prestamo * prestamo : prestamos) {
        materialesPrestados[topeMaterialesPrestados] = prestamo->getDtMaterialPrestado();
        topeMaterialesPrestados ++;
    }
    return DtLector(this->getNombre(), materialesPrestados, topeMaterialesPrestados);
}
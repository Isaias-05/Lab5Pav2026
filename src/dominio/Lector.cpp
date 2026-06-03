#include "Lector.h"
#include "DtLector.h"
#include "DtMaterialPrestado.h"

Lector::Lector(): Usuario() {
    this->fechaRegistro = DtFecha();
    this->prestamos = vector<Prestamo*>();
}

Lector::Lector(string id, string nombre, string contrasenia, DtFecha fechaRegistro): Usuario(id, nombre, contrasenia) {
    this->fechaRegistro = fechaRegistro;
    this->prestamos = vector<Prestamo*>();
}

Lector::~Lector() {
    for (Prestamo* prestamo : prestamos) {
        delete prestamo;
    }
}

DtFecha Lector::getFechaRegistro() {
    return fechaRegistro;
}

void Lector::setFechaRegistro(DtFecha fechaRegistro) {
    this->fechaRegistro = fechaRegistro;
}

void Lector::agregarPrestamo(Prestamo * prestamo) {
    prestamos.push_back(prestamo);
}

DtLector Lector::getDtLector() {
    vector<DtMaterialPrestado> materialesPrestados;
    for (Prestamo * prestamo : prestamos) {
        materialesPrestados.push_back(prestamo->getDtMaterialPrestado());
    }
    return DtLector(this->getNombre(), materialesPrestados);
}
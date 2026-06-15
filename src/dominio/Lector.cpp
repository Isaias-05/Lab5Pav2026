#include "Lector.h"

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
    return DtLector(this->getId(), this->getNombre(), this->getContrasenia(), this->fechaRegistro);
}

DtPrestamoLector Lector::getDtPrestamoLector() {
    vector<DtMaterialPrestado> materialesPrestados;
    for (Prestamo * prestamo : prestamos) {
        materialesPrestados.push_back(prestamo->getDtMaterialPrestado());
    }
    return DtPrestamoLector(this->getNombre(), materialesPrestados);
}

TipoUsuario Lector::getTipo() {
    return TipoUsuario::TU_LECTOR;
}
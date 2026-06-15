#include "Revista.h"
#include "DtRevistaFull.h"

Revista::Revista(string codigo, string titulo, int anioPublicacion, int numeroEdicion, bool publicacionMensual): Material(codigo, titulo, anioPublicacion) {
    this->numeroEdicion = numeroEdicion;
    this->publicacionMensual = publicacionMensual;
}

int Revista::getNumeroEdicion() {
    return numeroEdicion;
}

void Revista::setNumeroEdicion(int numeroEdicion) {
    this->numeroEdicion = numeroEdicion;
}

bool Revista::getPublicacionMensual() {
    return publicacionMensual;
}

void Revista::setPublicacionMensual(bool publicacionMensual) {
    this->publicacionMensual = publicacionMensual;
}

DtMaterialFull Revista::getDtMaterialFull() {
    return DtRevistaFull(this->getCodigo(), this->getTitulo(), this->getAnioPublicacion(), this->getPuntajePromedio(), TipoMaterial::TM_REVISTA, this->numeroEdicion, this->publicacionMensual);
}
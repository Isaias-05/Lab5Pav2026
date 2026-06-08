#include "Sesion.h"

Sesion::Sesion() {}

Sesion::Sesion(string identificador, string nombre, string contrasenia) {
    this->identificador = identificador;
    this->nombre = nombre;
    this->contrasenia = contrasenia;
}

Sesion::~Sesion() {}

string Sesion::getIdentificador() {
    return this->identificador;
}

void Sesion::setIdentificador(string identificador) {
    this->identificador = identificador;
}

string Sesion::getNombre() {
    return this->nombre;
}

void Sesion::setNombre(string nombre) {
    this->nombre = nombre;
}
#include "Puntaje.h"

Puntaje::Puntaje() {
    this->valor = 0;
    this->lector = nullptr;
}

Puntaje::Puntaje(int valor, Lector* lector) {
    this->valor = valor;
    this->lector = lector;
}

Puntaje::~Puntaje() {}

int Puntaje::getValor() {
    return valor;
}

void Puntaje::setValor(int valor) {
    this->valor = valor;
}

Lector* Puntaje::getLector() {
    return lector;
}

void Puntaje::setLector(Lector* lector) {
    this->lector = lector;
}
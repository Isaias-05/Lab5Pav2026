#include "DtMaterialPuntaje.h"

DtMaterialPuntaje::DtMaterialPuntaje() {}

DtMaterialPuntaje::DtMaterialPuntaje(string codigo, string titulo, float puntajePromedio, int puntajesRegistrados) {
    this->codigo = codigo;
    this->titulo = titulo;
    this->puntajePromedio = puntajePromedio;
    this->puntajesRegistrados = puntajesRegistrados;
}

DtMaterialPuntaje::~DtMaterialPuntaje() {}

string DtMaterialPuntaje::getCodigo() {
    return this->codigo;
}

string DtMaterialPuntaje::getTitulo() {
    return this->titulo;
}

float DtMaterialPuntaje::getPuntajePromedio() {
    return this->puntajePromedio;
}

int DtMaterialPuntaje::getPuntajesRegistrados() {
    return this->puntajesRegistrados;
}

string DtMaterialPuntaje::toString() {
    return "Codigo: " + this->codigo + "\nTitulo: " + this->titulo + "\nPuntaje Promedio: " + to_string(this->puntajePromedio) + "\nPuntajes Registrados: " + to_string(this->puntajesRegistrados);
}
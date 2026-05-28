#include "DtMaterialPuntaje.h"

DtMaterialPuntaje::DtMaterialPuntaje() {}

DtMaterialPuntaje::DtMaterialPuntaje(string codigo, string titulo, float puntajePromedio) {
    this->codigo = codigo;
    this->titulo = titulo;
    this->puntajePromedio = puntajePromedio;
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
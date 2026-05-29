#include "DtMaterialBasico.h"

DtMaterialBasico::DtMaterialBasico() {}

DtMaterialBasico::DtMaterialBasico(string codigo, string titulo) {
    this->codigo = codigo;
    this->titulo = titulo;
}

DtMaterialBasico::~DtMaterialBasico() {}

string DtMaterialBasico::getCodigo() {
    return this->codigo;
}

string DtMaterialBasico::getTitulo() {
    return this->titulo;
}
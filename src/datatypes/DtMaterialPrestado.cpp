#include "DtMaterialPrestado.h"

DtMaterialPrestado::DtMaterialPrestado() {}

DtMaterialPrestado::DtMaterialPrestado(string codigo, string titulo, DtFecha fechaPrestamo, int cantDias) {
    this->codigo = codigo;
    this->titulo = titulo;
    this->fechaPrestamo = fechaPrestamo;
    this->cantDias = cantDias;
}

DtMaterialPrestado::~DtMaterialPrestado() {
}

string DtMaterialPrestado::getCodigo() {
    return this->codigo;
}

string DtMaterialPrestado::getTitulo() {
    return this->titulo;
}

DtFecha DtMaterialPrestado::getFechaPrestamo() {
    return this->fechaPrestamo;
}

int DtMaterialPrestado::getCantDias() {
    return this->cantDias;
}
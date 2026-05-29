#include "DtRevistaFull.h"

DtRevistaFull::DtRevistaFull(){}

DtRevistaFull::DtRevistaFull(string codigo, string titulo, int anioPublicacion, float puntajePromedio, TipoMaterial tipoMaterial, int numeroEdicion, bool publicacionMensual) : DtMaterialFull(codigo, titulo, anioPublicacion, puntajePromedio, tipoMaterial){
    this->numeroEdicion = numeroEdicion;
    this->publicacionMensual = publicacionMensual;
}

DtRevistaFull::~DtRevistaFull(){}

int DtRevistaFull::getNumeroEdicion(){
    return this->numeroEdicion;
}

bool DtRevistaFull::getPublicacionMensual(){
    return this->publicacionMensual;
}
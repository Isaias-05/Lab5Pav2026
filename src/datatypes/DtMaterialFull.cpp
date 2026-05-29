#include "DtMaterialFull.h"

DtMaterialFull::DtMaterialFull(){}

DtMaterialFull::DtMaterialFull(string codigo, string titulo, int anioPublicacion, float puntajePromedio, TipoMaterial tipoMaterial){
    this->codigo = codigo;
    this->titulo = titulo;
    this->anioPublicacion = anioPublicacion;
    this->puntajePromedio = puntajePromedio;
    this->tipoMaterial = tipoMaterial;
}

DtMaterialFull::~DtMaterialFull(){}

string DtMaterialFull::getCodigo(){
    return this->codigo;
}

string DtMaterialFull::getTitulo(){
    return this->titulo;
}

int DtMaterialFull::getAnioPublicacion(){
    return this->anioPublicacion;
}

float DtMaterialFull::getPuntajePromedio(){
    return this->puntajePromedio;
}

TipoMaterial DtMaterialFull::getTipoMaterial(){
    return this->tipoMaterial;
}
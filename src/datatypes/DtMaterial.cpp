#include "DtMaterial.h"

DtMaterial::DtMaterial(){}

DtMaterial::DtMaterial(string codigo, string titulo, int anioPublicacion){
    this->codigo = codigo;
    this->titulo = titulo;
    this->anioPublicacion = anioPublicacion;
}

DtMaterial::~DtMaterial(){}

string DtMaterial::getCodigo(){
    return this->codigo;
}

string DtMaterial::getTitulo(){
    return this->titulo;
}

int DtMaterial::getAnioPublicacion(){
    return this->anioPublicacion;
}
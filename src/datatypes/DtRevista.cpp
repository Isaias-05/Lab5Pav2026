#include "DtRevista.h"

DtRevista::DtRevista(){}

DtRevista::DtRevista(string codigo, string titulo, int anioPublicacion, int numeroEdicion, bool publicacionMensual) : DtMaterial(codigo, titulo, anioPublicacion){
    this->numeroEdicion = numeroEdicion;
    this->publicacionMensual = publicacionMensual;
}

DtRevista::~DtRevista(){}

int DtRevista::getNumeroEdicion(){
    return this->numeroEdicion;
}

bool DtRevista::getPublicacionMensual(){
    return this->publicacionMensual;
}
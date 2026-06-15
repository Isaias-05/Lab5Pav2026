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

string DtRevista::toString(){
    return DtMaterial::toString() + "\nNumero de Edicion: " + to_string(this->numeroEdicion) + "\nPublicacion Mensual: " + (this->publicacionMensual ? "Si" : "No");
}
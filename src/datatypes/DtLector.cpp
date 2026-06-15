#include "DtLector.h"

DtLector::DtLector(){}

DtLector::DtLector(string id, string nombre, string contrasenia, DtFecha fechaRegistro) {
    this->id = id;
    this->nombre = nombre;
    this->contrasenia = contrasenia;
    this->fechaRegistro = fechaRegistro;
}

DtLector::~DtLector(){}

string DtLector::getId(){
    return this->id;
}

string DtLector::getNombre(){
    return this->nombre;
}

string DtLector::getContrasenia(){
    return this->contrasenia; 
}

DtFecha DtLector::getFechaRegistro() {
    return this->fechaRegistro;
}

string DtLector::toString() {
    return "ID: " + id + "\nNombre: " + nombre + "\nContrasenia: " + contrasenia + "\nFecha de Registro: " + fechaRegistro.toString();
}

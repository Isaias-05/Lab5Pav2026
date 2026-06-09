#include "DtLector.h"

DtLector::DtLector(){}

DtLector::DtLector(string id, string contrasenia, string nombre, DtFecha fechReg) {
    this->id = id;
    this->contrasenia = contrasenia;
    this->nombre = nombre;    
    this->fechReg = fechReg;
   
}

DtLector::~DtLector(){}

string DtLector::getId(){
    return this->id;
}

string DtLector::getContrasenia(){
    return this->contrasenia; 
}

string DtLector::getNombre(){
    return this->nombre;
}

DtFecha DtLector::getFechaRegistro(){
    return this->fechReg; 
}




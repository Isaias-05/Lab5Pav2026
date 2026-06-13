#include "Sesion.h"

Sesion* Sesion::instancia = nullptr;

Sesion::Sesion(){
    this->usuario = nullptr;
}

Sesion* Sesion::getInstancia(){
    if(!instancia) instancia = new Sesion();
    return instancia;
}

Sesion::~Sesion(){
    delete instancia;
    instancia = nullptr;
}

void Sesion::setUsuario(Usuario* usuario){
    this->usuario = usuario;
}
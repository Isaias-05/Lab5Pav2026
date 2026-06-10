#include "DtFuncionario.h"

DtFuncionario::DtFuncionario(){}

DtFuncionario::DtFuncionario(string nombre, string id, string contrasenia, int numeroEmpleado){
    this->id = id;
    this->contrasenia = contrasenia; 
    this->nombre = nombre;
    this->numeroEmpleado = numeroEmpleado;
}

DtFuncionario::~DtFuncionario(){}

string DtFuncionario::getId(){
    return this->id;
}

string DtFuncionario::getContrasenia(){
    return this->contrasenia;
}

string DtFuncionario::getNombre(){
    return this->nombre;
}

int DtFuncionario::getNumeroEmpleado(){
    return this->numeroEmpleado;
}
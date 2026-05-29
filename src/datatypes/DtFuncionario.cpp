#include "DtFuncionario.h"

DtFuncionario::DtFuncionario(){}

DtFuncionario::DtFuncionario(string nombre, string id, int numeroEmpleado){
    this->id = id;
    this->nombre = nombre;
    this->numeroEmpleado = numeroEmpleado;
}

DtFuncionario::~DtFuncionario(){}

string DtFuncionario::getId(){
    return this->id;
}

string DtFuncionario::getNombre(){
    return this->nombre;
}

int DtFuncionario::getNumeroEmpleado(){
    return this->numeroEmpleado;
}
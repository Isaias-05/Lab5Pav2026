#include "DtFuncionario.h"

DtFuncionario::DtFuncionario(){}

DtFuncionario::DtFuncionario(string id, string nombre, string contrasenia, int numeroEmpleado){
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

string DtFuncionario::toString() {
            return "ID: " + id + "\nNombre: " + nombre + "\nContrasenia: " + contrasenia + "\nNumero de Empleado: " + to_string(numeroEmpleado);
}
#include "Funcionario.h"

Funcionario::Funcionario(): Usuario() {
    this->numeroEmpleado = 0;
}

Funcionario::Funcionario(string id, string nombre, string contrasenia, int numeroEmpleado): Usuario(id, nombre, contrasenia) {
    this->numeroEmpleado = numeroEmpleado;
}

Funcionario::~Funcionario() {}

int Funcionario::getNumeroEmpleado() {
    return numeroEmpleado;
}

void Funcionario::setNumeroEmpleado(int numeroEmpleado) {
    this->numeroEmpleado = numeroEmpleado;
}
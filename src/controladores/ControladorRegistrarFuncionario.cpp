#include "ControladorRegistrarFuncionario.h"
#include "ManejadorUsuario.h"

ControladorRegistrarFuncionario::ControladorRegistrarFuncionario() {}

ControladorRegistrarFuncionario::~ControladorRegistrarFuncionario() {}

DtFuncionario ControladorRegistrarFuncionario::registrarFuncionario(string id, string nombre, string contrasenia, int numeroEmpleado) {
    this->id = id;
    this->nombre = nombre;
    this->contrasenia = contrasenia;
    this->numeroEmpleado = numeroEmpleado;

    return DtFuncionario(id, nombre, contrasenia, numeroEmpleado);
}

void ControladorRegistrarFuncionario::altaFuncionario() {
    Funcionario* funcionario = new Funcionario(this->id, this->nombre, this->contrasenia, this->numeroEmpleado);
    ManejadorUsuario::getInstancia()->agregarUsuario(funcionario);
}
#include "ControladorRegistrarFuncionario.h"

ControladorRegistrarFuncionario::ControladorRegistrarFuncionario() {}

ControladorRegistrarFuncionario::~ControladorRegistrarFuncionario() {}

DtFuncionario* ControladorRegistrarFuncionario::registrarFuncionario(string idUsuario, string nombre, string contrasenia, int numEmpleado) {
    return new DtFuncionario(idUsuario, nombre, contrasenia, numEmpleado);
}

void ControladorRegistrarFuncionario::altaFuncionario(DtFuncionario* dtFuncionario) {
    Funcionario* funcionario = new Funcionario(dtFuncionario->getId(), dtFuncionario->getNombre(), dtFuncionario->getContrasenia(), dtFuncionario->getNumeroEmpleado());
    ManejadorUsuario::getInstancia()->agregarUsuario(funcionario);
}
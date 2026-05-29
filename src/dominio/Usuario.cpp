#include "Usuario.h"

Usuario::Usuario() {
    this->id = "";
    this->nombre = "";
    this->contrasenia = "";
}

Usuario::Usuario(string id, string nombre, string contrasenia) {
    this->id = id;
    this->nombre = nombre;
    this->contrasenia = contrasenia;
}

Usuario::~Usuario() {}

string Usuario::getId() {
    return id;
}

void Usuario::setId(string id) {
    this->id = id;
}

string Usuario::getNombre() {
    return nombre;
}

void Usuario::setNombre(string nombre) {
    this->nombre = nombre;
}

string Usuario::getContrasenia() {
    return contrasenia;
}

void Usuario::setContrasenia(string contrasenia) {
    this->contrasenia = contrasenia;
}
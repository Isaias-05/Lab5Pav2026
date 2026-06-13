#include "ManejadorUsuario.h"

ManejadorUsuario* ManejadorUsuario::instancia = nullptr;

ManejadorUsuario::ManejadorUsuario() {
    this->usuarios = map<string, Usuario*>();
}

ManejadorUsuario::~ManejadorUsuario() {
    for (auto& pair : usuarios) {
        delete pair.second;
    }

    delete instancia;
    instancia = nullptr;
}

ManejadorUsuario* ManejadorUsuario::getInstancia() {
    if (!instancia) instancia = new ManejadorUsuario();
    return instancia;
}

void ManejadorUsuario::agregarUsuario(Usuario* usuario) {
    usuarios[usuario->getId()] = usuario;
}

Usuario* ManejadorUsuario::obtenerUsuario(string idUsuario) {
    if (usuarios.find(idUsuario) != usuarios.end()) {
        return usuarios[idUsuario];
    }
    return nullptr;
}

map<string, Usuario*> ManejadorUsuario::obtenerUsuarios() {
    return usuarios;
}

bool ManejadorUsuario::eliminarUsuario(string idUsuario) {
    if (usuarios.find(idUsuario) != usuarios.end()) {
        delete usuarios[idUsuario];
        usuarios.erase(idUsuario);
        return true;
    }
    return false;
}
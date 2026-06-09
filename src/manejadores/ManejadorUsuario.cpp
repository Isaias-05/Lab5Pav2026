#include "ManejadorUsuario.h"

ManejadorUsuario* ManejadorUsuario::instancia = nullptr;

ManejadorUsuario::ManejadorUsuario() {}

ManejadorUsuario::~ManejadorUsuario() {}

ManejadorUsuario* ManejadorUsuario::getInstancia() {
    if (instancia == nullptr) {
        instancia = new ManejadorUsuario();
    }
    return instancia;
}

bool ManejadorUsuario::agregarUsuario(Usuario* usuario) {
    map<string, Usuario*>::iterator iterador = usuarios.find(usuario->getId());
    if (iterador != usuarios.end()) {
        usuarios.insert({usuario->getId(), usuario});
        return true;
    } else {
        return false; 
    }
}

Usuario* ManejadorUsuario::obtenerUsuario(string idUsuario) {
    map<string, Usuario*>::iterator iterador = usuarios.find(idUsuario);
    if (iterador != usuarios.end()) {
        return iterador->second;
    } else {
        return nullptr; 
    }
}

map<string, Usuario*> ManejadorUsuario::obtenerUsuarios() {
    map<string, Usuario*> copiaUsuarios;

    for (const auto& i : usuarios) {
        copiaUsuarios.insert({i.first, i.second});
    }
    return copiaUsuarios;
}

bool ManejadorUsuario::eliminarUsuario(string idUsuario) {

    map<string, Usuario*>::iterator iterador = usuarios.find(idUsuario);
    if (iterador != usuarios.end()) {
        usuarios.erase(iterador);
        return true;
    } else {
        return false; 
    }

}
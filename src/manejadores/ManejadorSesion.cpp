#include "ManejadorSesion.h"

ManejadorSesion* ManejadorSesion::instancia = nullptr;

ManejadorSesion::ManejadorSesion() : sesionActiva(nullptr) {}

ManejadorSesion::~ManejadorSesion() {
    delete sesionActiva;
}

ManejadorSesion* ManejadorSesion::getInstancia() {
    if (!instancia) instancia = new ManejadorSesion();
    return instancia;
}

void ManejadorSesion::iniciarSesion(Sesion* sesion) {
    delete sesionActiva;
    sesionActiva = sesion;
}

void ManejadorSesion::cerrarSesion() {
    delete sesionActiva;
    sesionActiva = nullptr;
}

Sesion* ManejadorSesion::getSesionActiva() {
    return sesionActiva;
}

bool ManejadorSesion::haySesionActiva() const {
    return sesionActiva != nullptr;
}
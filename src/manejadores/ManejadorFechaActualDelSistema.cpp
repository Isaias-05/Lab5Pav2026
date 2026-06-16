#include "ManejadorFechaActualDelSistema.h"

ManejadorFechaActualDelSistema* ManejadorFechaActualDelSistema::instancia = nullptr;

ManejadorFechaActualDelSistema::ManejadorFechaActualDelSistema() {
}

ManejadorFechaActualDelSistema::~ManejadorFechaActualDelSistema() {
}

ManejadorFechaActualDelSistema* ManejadorFechaActualDelSistema::getInstancia() {
    if (!instancia) instancia = new ManejadorFechaActualDelSistema();
    return instancia;
}

DtFecha ManejadorFechaActualDelSistema::getFechaActualDelSistema() {
    return this->fechaActualDelSistema;
}

void ManejadorFechaActualDelSistema::setFechaActualDelSistema(DtFecha nuevaFecha) {
    this->fechaActualDelSistema = nuevaFecha;
}
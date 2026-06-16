#include "ControladorVerFechaActualDelSistema.h"
#include "ManejadorFechaActualDelSistema.h"

ControladorVerFechaActualDelSistema::ControladorVerFechaActualDelSistema() {
}

ControladorVerFechaActualDelSistema::~ControladorVerFechaActualDelSistema() {
}

DtFecha ControladorVerFechaActualDelSistema::verFechaActualDelSistema() {
    return ManejadorFechaActualDelSistema::getInstancia()->getFechaActualDelSistema();
}
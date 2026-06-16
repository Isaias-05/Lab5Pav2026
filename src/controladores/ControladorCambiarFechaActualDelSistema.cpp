#include "ControladorCambiarFechaActualDelSistema.h"
#include "ManejadorFechaActualDelSistema.h"

ControladorCambiarFechaActualDelSistema::ControladorCambiarFechaActualDelSistema() {
}

ControladorCambiarFechaActualDelSistema::~ControladorCambiarFechaActualDelSistema() {
}

DtFecha ControladorCambiarFechaActualDelSistema::cambiarFechaActualDelSistema(int dia, int mes, int anio, int hora, int minuto) {
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
    this->hora = hora;
    this->minuto = minuto;
    return DtFecha(dia, mes, anio, hora, minuto);
}

void ControladorCambiarFechaActualDelSistema::confirmar() {
    ManejadorFechaActualDelSistema* manejador = ManejadorFechaActualDelSistema::getInstancia();
    manejador->setFechaActualDelSistema(DtFecha(this->dia, this->mes, this->anio, this->hora, this->minuto));
}
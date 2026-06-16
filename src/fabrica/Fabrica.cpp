#include "Fabrica.h"

#include "ControladorIniciarSesion.h"
#include "ControladorCerrarSesion.h"
#include "ControladorRegistrarLector.h"
#include "ControladorRegistrarFuncionario.h"
#include "ControladorRegistrarMaterial.h"
#include "ControladorRegistrarPrestamo.h"
#include "ControladorConsultarPrestamosDeLector.h"
#include "ControladorVerInformacionDeMaterial.h"
#include "ControladorPuntuarMaterial.h"
#include "ControladorConsultarPuntajesDeMaterial.h"
#include "ControladorEliminarLector.h"
#include "ControladorEliminarMaterial.h"
#include "ControladorVerificarSesion.h"
#include "ControladorVerFechaActualDelSistema.h"
#include "ControladorCambiarFechaActualDelSistema.h"

Fabrica* Fabrica::instancia = nullptr;

Fabrica::Fabrica() {}

Fabrica* Fabrica::getInstancia() {
    if (instancia == nullptr) {
        instancia = new Fabrica();
    }
    return instancia;
}

IControladorIniciarSesion* Fabrica::getControladorIniciarSesion() {
    return new ControladorIniciarSesion();
}

IControladorCerrarSesion* Fabrica::getControladorCerrarSesion() {
    return new ControladorCerrarSesion();
}

IControladorRegistrarLector* Fabrica::getControladorRegistrarLector() {
    return new ControladorRegistrarLector();
}

IControladorRegistrarFuncionario* Fabrica::getControladorRegistrarFuncionario() {
    return new ControladorRegistrarFuncionario();
}

IControladorRegistrarMaterial* Fabrica::getControladorRegistrarMaterial() {
    return new ControladorRegistrarMaterial();
}

IControladorRegistrarPrestamo* Fabrica::getControladorRegistrarPrestamo() {
    return new ControladorRegistrarPrestamo();
}

IControladorConsultarPrestamosDeLector* Fabrica::getControladorConsultarPrestamosDeLector() {
    return new ControladorConsultarPrestamosDeLector();
}

IControladorVerInformacionDeMaterial* Fabrica::getControladorVerInformacionDeMaterial() {
    return new ControladorVerInformacionDeMaterial();
}

IControladorPuntuarMaterial* Fabrica::getControladorPuntuarMaterial() {
    return new ControladorPuntuarMaterial();
}

IControladorConsultarPuntajesDeMaterial* Fabrica::getControladorConsultarPuntajesDeMaterial() {
    return new ControladorConsultarPuntajesDeMaterial();
}

IControladorEliminarLector* Fabrica::getControladorEliminarLector() {
    return new ControladorEliminarLector();
}

IControladorEliminarMaterial* Fabrica::getControladorEliminarMaterial() {
    return new ControladorEliminarMaterial();
}

IControladorVerificarSesion* Fabrica::getControladorVerificarSesion() {
    return new ControladorVerificarSesion();
}

IControladorVerFechaActualDelSistema* Fabrica::getControladorVerFechaActualDelSistema() {
    return new ControladorVerFechaActualDelSistema();
}

IControladorCambiarFechaActualDelSistema* Fabrica::getControladorCambiarFechaActualDelSistema() {
    return new ControladorCambiarFechaActualDelSistema();
}
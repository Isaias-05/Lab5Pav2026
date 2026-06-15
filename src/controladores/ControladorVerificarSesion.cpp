#include "ControladorVerificarSesion.h"
#include "Sesion.h"

ControladorVerificarSesion::ControladorVerificarSesion() {}

ControladorVerificarSesion::~ControladorVerificarSesion() {}

TipoUsuario ControladorVerificarSesion::verificarSesion() {
    Sesion* sesion = Sesion::getInstancia();
    Usuario* usuario = sesion->getUsuario();

    return usuario->getTipo();
}
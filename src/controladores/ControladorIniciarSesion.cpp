#include "ControladorIniciarSesion.h"
#include "ManejadorUsuario.h"

ControladorIniciarSesion::ControladorIniciarSesion() {}

ControladorIniciarSesion::~ControladorIniciarSesion() {}

bool ControladorIniciarSesion::iniciarSesion(string idUsuario, string contrasenia) {

    ManejadorUsuario* manejadorUsuario = ManejadorUsuario::getInstancia();

    Usuario* usuario = manejadorUsuario->obtenerUsuario(idUsuario);

    if (usuario != nullptr && usuario->getContrasenia() == contrasenia) {
        Sesion* sesion = Sesion::getInstancia();
        sesion->setUsuario(usuario);
        return true;
    }

    return false;
}
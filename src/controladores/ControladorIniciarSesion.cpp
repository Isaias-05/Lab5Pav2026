#include "ControladorIniciarSesion.h"
#include "ManejadorUsuario.h"
#include "ManejadorSesion.h"

ControladorIniciarSesion::ControladorIniciarSesion() {}

ControladorIniciarSesion::~ControladorIniciarSesion() {}

bool ControladorIniciarSesion::iniciarSesion(string idUsuario, string contrasenia) {
    ManejadorUsuario* manejadorUsuario = ManejadorUsuario::getInstancia();

    Usuario* usuario = manejadorUsuario->obtenerUsuario(idUsuario);

    if (usuario != nullptr && usuario->getContrasenia() == contrasenia) {

        Sesion* sesion = new Sesion(idUsuario, usuario->getNombre(), contrasenia);

        ManejadorSesion::getInstancia()->iniciarSesion(sesion);

        return true;
    }

    return false;
}
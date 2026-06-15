#ifndef ICONTROLADORVERIFICARSESION
#define ICONTROLADORVERIFICARSESION

#include "TipoUsuario.h"
#include <string>
using namespace std;

// Precondiciones: El usuario debe haber iniciado sesión previamente para que esta función funcione correctamente.
class IControladorVerificarSesion {
public:
    virtual ~IControladorVerificarSesion() {}
    virtual TipoUsuario verificarSesion() = 0;
};

#endif // ICONTROLADORVERIFICARSESION
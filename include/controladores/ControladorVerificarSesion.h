#ifndef CONTROLADORVERIFICARSESION
#define CONTROLADORVERIFICARSESION

#include "IControladorVerificarSesion.h"

class ControladorVerificarSesion : public IControladorVerificarSesion {
    public:
        ControladorVerificarSesion();
        
        ~ControladorVerificarSesion();

        TipoUsuario verificarSesion() override;
};

#endif // CONTROLADORVERIFICARSESION
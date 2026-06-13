#ifndef CONTROLADORCERRARSESION
#define CONTROLADORCERRARSESION

#include "IControladorCerrarSesion.h"
#include "Sesion.h"

class ControladorCerrarSesion : public IControladorCerrarSesion {
public:
	ControladorCerrarSesion();
	
	~ControladorCerrarSesion();

	void cerrarSesion() override;
};

#endif // CONTROLADORCERRARSESION


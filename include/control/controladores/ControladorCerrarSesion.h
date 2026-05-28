#ifndef CONTROLADORCERRARSESION_H
#define CONTROLADORCERRARSESION_H

#include "IControladorCerrarSesion.h"
#include "Sesion.h"

class ControladorCerrarSesion : public IControladorCerrarSesion {
public:
	ControladorCerrarSesion();
	~ControladorCerrarSesion();

	void cerrarSesion() override;
};

#endif // CONTROLADORCERRARSESION_H


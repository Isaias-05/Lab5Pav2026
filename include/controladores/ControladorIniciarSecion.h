#ifndef CONTROLADORINICIARSESION
#define CONTROLADORINICIARSESION

#include "Sesion.h"
#include "ManejadorUsuario.h"
#include "IControladorIniciarSesion.h"
#include <string>
using std::string;

class ControladorIniciarSecion : public IControladorIniciarSesion {
public:
	ControladorIniciarSecion();
	~ControladorIniciarSecion();

	bool iniciarSesion(string, string) override;
};

#endif // CONTROLADORINICIARSESION


#ifndef CONTROLADORINICIARSESION_H
#define CONTROLADORINICIARSESION_H

#include "IControladorIniciarSesion.h"
#include <string>
using std::string;

class ControladorIniciarSecion : public IControladorIniciarSesion {
public:
	ControladorIniciarSecion();
	~ControladorIniciarSecion();

	bool iniciarSesion(const string &usuario, const string &contrasena) override;
	void cerrarSesion() override;
};

#endif // CONTROLADORINICIARSESION_H


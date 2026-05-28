#ifndef CONTROLADORINICIARSESION_H
#define CONTROLADORINICIARSESION_H

#include "IControladorIniciarSesion.h"
#include <string>
using std::string;

class ControladorIniciarSecion : public IControladorIniciarSesion {
public:
	ControladorIniciarSecion();
	~ControladorIniciarSecion();

	bool iniciarSesion(string, string) override;
};

#endif // CONTROLADORINICIARSESION_H


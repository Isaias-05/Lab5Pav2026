#ifndef CONTROLADORPUNTUARMATERIAL_H
#define CONTROLADORPUNTUARMATERIAL_H

#include "IControladorPuntuarMaterial.h"
#include <string>
using std::string;

class ControladorPuntuarMaterial : public IControladorPuntuarMaterial {
public:
	ControladorPuntuarMaterial();
	~ControladorPuntuarMaterial();

	bool puntuarMaterial(const string &codigo, int puntaje) override;
};

#endif // CONTROLADORPUNTUARMATERIAL_H


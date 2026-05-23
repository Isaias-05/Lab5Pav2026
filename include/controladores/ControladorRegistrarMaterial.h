#ifndef CONTROLADORREGISTRARMATERIAL_H
#define CONTROLADORREGISTRARMATERIAL_H

#include "IControladorRegistrarMaterial.h"
#include <string>
using std::string;

class ControladorRegistrarMaterial : public IControladorRegistrarMaterial {
public:
	ControladorRegistrarMaterial();
	~ControladorRegistrarMaterial();

	bool registrarMaterial(const string &codigo, const string &titulo) override;
};

#endif // CONTROLADORREGISTRARMATERIAL_H


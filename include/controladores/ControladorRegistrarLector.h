#ifndef CONTROLADORREGISTRARLECTOR_H
#define CONTROLADORREGISTRARLECTOR_H

#include "IControladorRegistrarLector.h"
#include <string>
using std::string;

class ControladorRegistrarLector : public IControladorRegistrarLector {
public:
	ControladorRegistrarLector();
	~ControladorRegistrarLector();

	bool registrarLector(const string &nombre, const string &email) override;
};

#endif // CONTROLADORREGISTRARLECTOR_H


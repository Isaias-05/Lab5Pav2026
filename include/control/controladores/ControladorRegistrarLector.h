#ifndef CONTROLADORREGISTRARLECTOR_H
#define CONTROLADORREGISTRARLECTOR_H

#include "IControladorRegistrarLector.h"
#include "DtLector.h"
#include "DtFecha.h"
#include <string>
using std::string;

class ControladorRegistrarLector : public IControladorRegistrarLector {
public:
	ControladorRegistrarLector();
	~ControladorRegistrarLector();

	DtLector registrarLector(string, string, string, DtFecha) override;
	void altaLector() override; 
};

#endif // CONTROLADORREGISTRARLECTOR_H


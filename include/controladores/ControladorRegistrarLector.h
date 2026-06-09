#ifndef CONTROLADORREGISTRARLECTOR
#define CONTROLADORREGISTRARLECTOR

#include "Lector.h"
#include "ManejadorUsuario.h"
#include "IControladorRegistrarLector.h"
#include "DtLector.h"
#include "DtFecha.h"
#include <string>
using std::string;

class ControladorRegistrarLector : public IControladorRegistrarLector {
public:
	ControladorRegistrarLector();
	~ControladorRegistrarLector();

	DtLector* registrarLector(string, string, string, DtFecha) override;
	void altaLector(DtLector* dtLector) override; 
};

#endif // CONTROLADORREGISTRARLECTOR


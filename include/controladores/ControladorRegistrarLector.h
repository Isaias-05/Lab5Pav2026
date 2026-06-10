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
private:
	string id;
	string nombre;
	string contrasenia;
	DtFecha fechaRegistro;
public:
	ControladorRegistrarLector();
	~ControladorRegistrarLector();

	DtLector registrarLector(string, string, string, DtFecha) override;
	void altaLector() override; 
};

#endif // CONTROLADORREGISTRARLECTOR


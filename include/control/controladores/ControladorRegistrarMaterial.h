#ifndef CONTROLADORREGISTRARMATERIAL_H
#define CONTROLADORREGISTRARMATERIAL_H

#include "ManejadorMaterial.h"
#include "Libro.h"
#include "Revista.h"

#include "IControladorRegistrarMaterial.h"
#include "DtLibro.h"
#include "DtRevista.h"
#include "TipoMaterial.h"
#include <string>
using std::string;

class ControladorRegistrarMaterial : public IControladorRegistrarMaterial {
public:
	ControladorRegistrarMaterial();
	~ControladorRegistrarMaterial();

	void registrarMaterial(string, string, int, TipoMaterial) override;
	DtLibro ingresarDatosLibro(string, int) override;
	DtRevista ingresarDatosRevista(int, bool) override;
	void confirmar() override;
	
};

#endif // CONTROLADORREGISTRARMATERIAL_H


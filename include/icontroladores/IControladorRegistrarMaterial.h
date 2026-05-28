#ifndef ICONTROLADORREGISTRARMATERIAL_H
#define ICONTROLADORREGISTRARMATERIAL_H

#include "DtLibro.h"
#include "DtRevista.h"
#include "TipoMaterial.h"
#include <string>
using std::string;

class IControladorRegistrarMaterial {
public:
	virtual ~IControladorRegistrarMaterial() {}

	virtual void registrarMaterial(string, string, int, TipoMaterial) = 0;
	virtual DtLibro ingresarDatosLibro(string, int) = 0;
	virtual DtRevista ingresarDatosRevista(int, bool) = 0;
	virtual void confirmar() = 0;
};

#endif // ICONTROLADORREGISTRARMATERIAL_H


#ifndef ICONTROLADORELIMINARMATERIAL
#define ICONTROLADORELIMINARMATERIAL

#include "DtMaterialBasico.h"
#include <string>
using std::string;

class IControladorEliminarMaterial {
public:
	virtual ~IControladorEliminarMaterial() {}

	virtual set<DtMaterialBasico> listarMateriales() = 0;
	virtual DtMaterialBasico seleccionarMaterial(string codigo) = 0;
	virtual void confirmar() = 0;
};

#endif // ICONTROLADORELIMINARMATERIAL


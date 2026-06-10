#ifndef ICONTROLADORELIMINARMATERIAL
#define ICONTROLADORELIMINARMATERIAL

#include "DtMaterialBasico.h"

#include <vector>
#include <string>
using namespace std;

class IControladorEliminarMaterial {
public:
	virtual ~IControladorEliminarMaterial() {}

	virtual vector<DtMaterialBasico*> listarMateriales() = 0;
	virtual DtMaterialBasico seleccionarMaterial(string codigo) = 0;
	virtual void confirmar() = 0;
};

#endif // ICONTROLADORELIMINARMATERIAL


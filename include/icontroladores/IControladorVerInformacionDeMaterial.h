#ifndef ICONTROLADORVERINFORMACIONDEMATERIAL
#define ICONTROLADORVERINFORMACIONDEMATERIAL

#include <string>
#include <set>
#include "DtMaterialBasico.h"
using std::string;
using std::set;

class IControladorVerInformacionDeMaterial {
public:
	virtual ~IControladorVerInformacionDeMaterial() {}

	virtual set<DtMaterialBasico> listarMateriales() = 0;
	virtual DtMaterialBasico seleccionarMaterial(string codigo) = 0;
};

#endif // ICONTROLADORVERINFORMACIONDEMATERIAL


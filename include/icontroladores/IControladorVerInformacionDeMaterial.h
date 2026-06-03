#ifndef ICONTROLADORVERINFORMACIONDEMATERIAL
#define ICONTROLADORVERINFORMACIONDEMATERIAL

#include <string>
using std::string;

class IControladorVerInformacionDeMaterial {
public:
	virtual ~IControladorVerInformacionDeMaterial() {}

	virtual set<DtMaterialBasico> listarMateriales() = 0;
	virtual DtMaterialBasico seleccionarMaterial(string codigo) = 0;
};

#endif // ICONTROLADORVERINFORMACIONDEMATERIAL


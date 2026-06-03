#ifndef ICONTROLADORVERINFORMACIONMATERIAL
#define ICONTROLADORVERINFORMACIONMATERIAL

#include <string>
using std::string;

class IControladorVerInformacionMaterial {
public:
	virtual ~IControladorVerInformacionMaterial() {}

	virtual set<DtMaterialBasico> listarMateriales() = 0;
	virtual DtMaterialBasico seleccionarMaterial(string codigo) = 0;
};

#endif // ICONTROLADORVERINFORMACIONMATERIAL


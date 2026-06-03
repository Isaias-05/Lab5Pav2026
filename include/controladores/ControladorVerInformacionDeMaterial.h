#ifndef CONTROLADORVERINFORMACIONDEMATERIAL
#define CONTROLADORVERINFORMACIONDEMATERIAL

#include "ManejadorMaterial.h"
#include "Material.h"

#include "IControladorVerInformacionDeMaterial.h"
#include "DtMaterialBasico.h"
#include <string>
using std::string;

class ControladorVerInformacionDeMaterial : public IControladorVerInformacionDeMaterial {
public:
	ControladorVerInformacionDeMaterial();
	~ControladorVerInformacionDeMaterial();

	set<DtMaterialBasico> listarMateriales() override;
	DtMaterialBasico seleccionarMaterial(string codigo) override;
};

#endif // CONTROLADORVERINFORMACIONDEMATERIAL


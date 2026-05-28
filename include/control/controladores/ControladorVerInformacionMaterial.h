#ifndef CONTROLADORVERINFORMACIONMATERIAL_H
#define CONTROLADORVERINFORMACIONMATERIAL_H

#include "IControladorVerInformacionMaterial.h"
#include "DtMaterialBasico.h"
#include <string>
using std::string;

class ControladorVerInformacionMaterial : public IControladorVerInformacionMaterial {
public:
	ControladorVerInformacionMaterial();
	~ControladorVerInformacionMaterial();

	set<DtMaterialBasico> listarMateriales() override;
	DtMaterialBasico seleccionarMaterial(string codigo) override;
};

#endif // CONTROLADORVERINFORMACIONMATERIAL_H


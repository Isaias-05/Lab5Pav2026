#ifndef CONTROLADORVERINFORMACIONDEMATERIAL
#define CONTROLADORVERINFORMACIONDEMATERIAL

#include "IControladorVerInformacionDeMaterial.h"
#include "ManejadorMaterial.h"
#include "Material.h"
#include "DtMaterialBasico.h"
#include "DtMaterialFull.h"

#include <string>
#include <vector>

using namespace std;

class ControladorVerInformacionDeMaterial : public IControladorVerInformacionDeMaterial {
public:
	ControladorVerInformacionDeMaterial();
	~ControladorVerInformacionDeMaterial();

	vector<DtMaterialBasico> listarMateriales() override;
	DtMaterialFull* seleccionarMaterial(string codigo) override;
	bool isEmpty() override;
};

#endif // CONTROLADORVERINFORMACIONDEMATERIAL


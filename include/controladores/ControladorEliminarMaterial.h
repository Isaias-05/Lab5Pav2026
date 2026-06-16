#ifndef CONTROLADORELIMINARMATERIAL
#define CONTROLADORELIMINARMATERIAL

#include "ManejadorMaterial.h"
#include "Material.h"
#include "IControladorEliminarMaterial.h"
#include "DtMaterialBasico.h"

#include <vector>
#include <string>
using std::string;

class ControladorEliminarMaterial : public IControladorEliminarMaterial {
public:
	ControladorEliminarMaterial();
	~ControladorEliminarMaterial();

	vector<DtMaterialBasico> listarMateriales() override;
	DtMaterialBasico seleccionarMaterial(string codigo) override;
	void confirmar(string codigo) override;
	bool isEmpty() override;
};

#endif // CONTROLADORELIMINARMATERIAL


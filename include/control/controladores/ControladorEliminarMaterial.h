#ifndef CONTROLADORELIMINARMATERIAL_H
#define CONTROLADORELIMINARMATERIAL_H

#include "ManejadorMaterial.h"
#include "Material.h"

#include "IControladorEliminarMaterial.h"
#include "DtMaterialBasico.h"
#include <string>
using std::string;

class ControladorEliminarMaterial : public IControladorEliminarMaterial {
public:
	ControladorEliminarMaterial();
	~ControladorEliminarMaterial();

	set<DtMaterialBasico> listarMateriales() override;
	DtMaterialBasico seleccionarMaterial(string codigo) override;
	void confirmar() override;
};

#endif // CONTROLADORELIMINARMATERIAL_H


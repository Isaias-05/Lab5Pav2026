#ifndef CONTROLADORCONSULTARPUNTAJEMATERIAL_H
#define CONTROLADORCONSULTARPUNTAJEMATERIAL_H

#include "ManejadorMaterial.h"
#include "Material.h"

#include "DtMaterialBasico.h"
#include "DtMaterialPuntaje.h"
#include <set>
#include <string>
using namespace std;

class ControladorConsultarPuntajeMaterial : public IControladorConsultarPuntajeMaterial {
public:
	ControladorConsultarPuntajeMaterial();
	~ControladorConsultarPuntajeMaterial();

	set<DtMaterialBasico> listarMateriales() override;
	DtMaterialPuntaje seleccionarMaterial(string codigo) override;
	
};

#endif 
#ifndef CONTROLADORCONSULTARPUNTAJESDEMATERIAL
#define CONTROLADORCONSULTARPUNTAJESDEMATERIAL

#include "ManejadorMaterial.h"
#include "Material.h"

#include "IControladorConsultarPuntajesDeMaterial.h"
#include "DtMaterialBasico.h"
#include "DtMaterialPuntaje.h"
#include <set>
#include <string>
using namespace std;

class ControladorConsultarPuntajesDeMaterial : public IControladorConsultarPuntajesDeMaterial {
public:
	ControladorConsultarPuntajesDeMaterial();
	~ControladorConsultarPuntajesDeMaterial();

	set<DtMaterialBasico> listarMateriales() override;
	DtMaterialPuntaje seleccionarMaterial(string codigo) override;
	
};

#endif
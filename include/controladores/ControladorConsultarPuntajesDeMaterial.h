#ifndef CONTROLADORCONSULTARPUNTAJESDEMATERIAL
#define CONTROLADORCONSULTARPUNTAJESDEMATERIAL

#include "ManejadorMaterial.h"
#include "Material.h"

#include "IControladorConsultarPuntajesDeMaterial.h"
#include "DtMaterialBasico.h"
#include "DtMaterialPuntaje.h"
#include <vector>
#include <string>

using namespace std;

class ControladorConsultarPuntajesDeMaterial : public IControladorConsultarPuntajesDeMaterial {
	public:
		ControladorConsultarPuntajesDeMaterial();

		~ControladorConsultarPuntajesDeMaterial();

		vector<DtMaterialBasico> listarMateriales() override;

		DtMaterialPuntaje seleccionarMaterial(string codigo) override;
};

#endif
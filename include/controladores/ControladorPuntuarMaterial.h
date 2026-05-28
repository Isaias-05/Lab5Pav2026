#ifndef CONTROLADORPUNTUARMATERIAL_H
#define CONTROLADORPUNTUARMATERIAL_H

#include "ManejadorMaterial.h"
#include "Material.h"

#include "IControladorPuntuarMaterial.h"
#include "DtMaterialBasico.h"
#include "DtPuntaje.h"

#include <set>
#include <string>
using namespace std;

class ControladorPuntuarMaterial : public IControladorPuntuarMaterial {
public:
	ControladorPuntuarMaterial();
	~ControladorPuntuarMaterial();

	set<DtMaterialBasico> listarMateriales() override;
	DtMaterialBasico seleccionarMaterial(string codigo) override;
	DtPuntaje obtenerPuntaje(string codigo, int puntaje) override;
	void puntuarMaterial(string idUsuario, int puntaje) override;
};

#endif // CONTROLADORPUNTUARMATERIAL_H


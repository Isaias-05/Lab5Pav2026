#ifndef CONTROLADORPUNTUARMATERIAL
#define CONTROLADORPUNTUARMATERIAL

#include "ManejadorMaterial.h"
#include "Material.h"

#include "Sesion.h"
#include "IControladorPuntuarMaterial.h"
#include "DtMaterialBasico.h"
#include "DtPuntaje.h"
#include "Puntaje.h"
#include "Lector.h"

#include <vector>
#include <set>
#include <string>
using namespace std;

class ControladorPuntuarMaterial : public IControladorPuntuarMaterial {
	private:
		Material* materialSeleccionado;
		Lector* lectorSeleccionado;
	public:
		ControladorPuntuarMaterial();

		~ControladorPuntuarMaterial();

		vector<DtMaterialBasico> listarMateriales() override;

		DtMaterialBasico seleccionarMaterial(string codigo) override;

		DtPuntaje obtenerPuntaje() override;
		
		void puntuarMaterial(int valorPuntaje) override;
};

#endif // CONTROLADORPUNTUARMATERIAL


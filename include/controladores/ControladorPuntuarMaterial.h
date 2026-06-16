#ifndef CONTROLADORPUNTUARMATERIAL
#define CONTROLADORPUNTUARMATERIAL

#include "ManejadorMaterial.h"
#include "Material.h"

#include "IControladorPuntuarMaterial.h"
#include "DtMaterialBasico.h"
#include "DtPuntaje.h"

#include <vector>
#include <set>
#include <string>
using namespace std;

class ControladorPuntuarMaterial : public IControladorPuntuarMaterial {
	private:
		Material* materialSeleccionado;
		string idLectorSeleccionado;
	public:
		ControladorPuntuarMaterial();

		~ControladorPuntuarMaterial();

		vector<DtMaterialBasico> listarMateriales() override;

		DtMaterialBasico seleccionarMaterial(string codigo) override;

		DtPuntaje obtenerPuntaje(string idLector) override;
		
		void puntuarMaterial(int puntaje) override;
};

#endif // CONTROLADORPUNTUARMATERIAL


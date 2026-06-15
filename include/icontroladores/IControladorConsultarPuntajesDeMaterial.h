#ifndef ICONTROLADORCONSULTARPUNAJESDEMATERIAL
#define ICONTROLADORCONSULTARPUNAJESDEMATERIAL

#include "DtMaterialBasico.h"
#include "DtMaterialPuntaje.h"
#include <vector>
#include <string>

using namespace std;

class IControladorConsultarPuntajesDeMaterial {

	public:
		~IControladorConsultarPuntajesDeMaterial() {};

		virtual vector<DtMaterialBasico> listarMateriales() = 0;
		virtual DtMaterialPuntaje seleccionarMaterial(string codigo) = 0;
};

#endif


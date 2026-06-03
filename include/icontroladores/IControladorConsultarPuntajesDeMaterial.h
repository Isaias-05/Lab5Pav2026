#ifndef ICONTROLADORCONSULTARPUNAJESDEMATERIAL
#define ICONTROLADORCONSULTARPUNAJESDEMATERIAL

#include "DtMaterialBasico.h"
#include "DtMaterialPuntaje.h"
#include <set>
#include <string>
using namespace std;

class IControladorConsultarPuntajesDeMaterial {
public:
	~IControladorConsultarPuntajesDeMaterial() {};

	virtual set<DtMaterialBasico> listarMateriales() = 0;
	virtual DtMaterialPuntaje seleccionarMaterial(string codigo) = 0;
};

#endif


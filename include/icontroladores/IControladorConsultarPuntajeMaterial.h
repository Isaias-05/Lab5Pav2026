#ifndef ICONTROLADORCONSULTARPUNAJEMATERIAL
#define ICONTROLADORCONSULTARPUNAJEMATERIAL

#include "DtMaterialBasico.h"
#include "DtMaterialPuntaje.h"
#include <set>
#include <string>
using namespace std;

class IControladorConsultarPuntajeMaterial {
public:
	~IControladorConsultarPuntajeMaterial() {};

	virtual set<DtMaterialBasico> listarMateriales() = 0;
	virtual DtMaterialPuntaje seleccionarMaterial(string codigo) = 0;
};

#endif


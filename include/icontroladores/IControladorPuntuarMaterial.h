#ifndef ICONTROLADORPUNTUARMATERIAL
#define ICONTROLADORPUNTUARMATERIAL

#include "DtMaterialBasico.h"
#include "DtPuntaje.h"

#include <vector>
#include <set>
#include <string>
using namespace std;

class IControladorPuntuarMaterial {
public:
	virtual ~IControladorPuntuarMaterial() {}
	
	virtual vector<DtMaterialBasico> listarMateriales() = 0;
	virtual DtMaterialBasico seleccionarMaterial(string codigo) = 0;
	virtual DtPuntaje obtenerPuntaje(string idLector) = 0;
	virtual void puntuarMaterial(int puntaje) = 0;
};

#endif // ICONTROLADORPUNTUARMATERIAL


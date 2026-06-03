#ifndef ICONTROLADORPUNTUARMATERIAL
#define ICONTROLADORPUNTUARMATERIAL

#include "DtMaterialBasico.h"
#include "DtPuntaje.h"

#include <set>
#include <string>
using namespace std;

class IControladorPuntuarMaterial {
public:
	virtual ~IControladorPuntuarMaterial() {}
	
	virtual set<DtMaterialBasico> listarMateriales() = 0;
	virtual DtMaterialBasico seleccionarMaterial(string codigo) = 0;
	virtual DtPuntaje obtenerPuntaje(string codigo, int puntaje) = 0;
	virtual void puntuarMaterial(string idUsuario, int puntaje) = 0;
};

#endif // ICONTROLADORPUNTUARMATERIAL


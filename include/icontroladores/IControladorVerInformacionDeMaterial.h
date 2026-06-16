#ifndef ICONTROLADORVERINFORMACIONDEMATERIAL
#define ICONTROLADORVERINFORMACIONDEMATERIAL

#include "DtMaterialBasico.h"
#include "DtMaterialFull.h"

#include <string>
#include <vector>

using namespace std;

class IControladorVerInformacionDeMaterial {
public:
	virtual ~IControladorVerInformacionDeMaterial() {}

	virtual vector<DtMaterialBasico> listarMateriales() = 0;
	virtual DtMaterialFull* seleccionarMaterial(string codigo) = 0;
	virtual bool isEmpty() = 0;
};

#endif // ICONTROLADORVERINFORMACIONDEMATERIAL

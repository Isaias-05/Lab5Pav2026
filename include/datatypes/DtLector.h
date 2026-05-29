#ifndef DTLECTOR
#define DTLECTOR
#define MAX_MATERIALES_PRESTADOS 100

#include "DtMaterialPrestado.h"
#include <string>
using namespace std;

class DtLector{
    private:
        string nombre;
        DtMaterialPrestado materialesPrestados[MAX_MATERIALES_PRESTADOS];
        int topeMaterialesPrestados;
	public:
		DtLector();
		DtLector(string nombre, DtMaterialPrestado * materialesPrestados, int topeMaterialesPrestados);
		~DtLector();
        string getNombre();
        DtMaterialPrestado * getMaterialesPrestados();
        int getTopeMaterialesPrestados();
};
#endif
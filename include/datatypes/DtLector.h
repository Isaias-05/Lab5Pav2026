#ifndef DTLECTOR
#define DTLECTOR

#include "DtMaterialPrestado.h"
#include <string>
#include <vector>
using namespace std;

class DtLector{
    private:
        string nombre;
        vector<DtMaterialPrestado> materialesPrestados;
	public:
		DtLector();
		DtLector(string nombre, vector<DtMaterialPrestado> materialesPrestados);
		~DtLector();

        string getNombre();

        const vector<DtMaterialPrestado>& getMaterialesPrestados();

        size_t getTopeMaterialesPrestados();
};
#endif
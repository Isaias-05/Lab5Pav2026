#ifndef DTLECTOR_H
#define DTLECTOR_H

#include "DtMaterialPrestado.h"
#include <set>
#include <string>
using namespace std;

class DtLector{
    private:
        string nombre;
        set<DtMaterialPrestado> materialesPrestados;
	public:
		DtLector();
		DtLector(string nombre, set<DtMaterialPrestado> materialesPrestados);
		~DtLector();
        string getNombre();
        set<DtMaterialPrestado> getMaterialesPrestados();
};
#endif
#ifndef DTLECTOR
#define DTLECTOR

#include "DtMaterialPrestado.h"
#include <string>
using namespace std;

class DtLector{
    private:
        string nombre;
        DtMaterialPrestado * materialesPrestados;
	public:
		DtLector();
		DtLector(string nombre, DtMaterialPrestado * materialesPrestados);
		~DtLector();
        string getNombre();
        DtMaterialPrestado * getMaterialesPrestados();
};
#endif
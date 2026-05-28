#ifndef DT_LECTOR
#define DT_LECTOR

#include "DtMaterialPrestado.h"
#include <string>
using namespace std;

class DtLector{
    private:
        string nombre;
        DtMaterialPrestado * materialesPrestados; 

    public:
        DtLector(string, DtMaterialPrestado*);

        string getNombre();

        DtMaterialPrestado* getMaterialesPrestados();
};

#endif
#ifndef DTPRESTAMOLECTOR
#define DTPRESTAMOLECTOR

#include "DtMaterialPrestado.h"
#include <vector>
using namespace std;

class DtPrestamoLector {
    private:
        string nombreLector;
        vector<DtMaterialPrestado*> materialesPrestados;
    public:
        DtPrestamoLector();
        DtPrestamoLector(string nombreLector, vector<DtMaterialPrestado*> materialesPrestados);
        ~DtPrestamoLector();

        string getNombreLector();

        vector<DtMaterialPrestado*> getMaterialesPrestados();
        
        size_t getTopeMaterialesPrestados();
};
#endif
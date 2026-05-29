#ifndef DTPRESTAMOLECTOR
#define DTPRESTAMOLECTOR

#include "DtMaterial.h"
#include <set>
using namespace std;

class DtPrestamoLector {
    private:
        string nombreLector;
        set<DtMaterial> materialesPrestados;
    public:
        DtPrestamoLector();
        DtPrestamoLector(string nombreLector, set<DtMaterial> materialesPrestados);
        ~DtPrestamoLector();

        string getNombreLector();

        set<DtMaterial> getMaterialesPrestados();
};
#endif
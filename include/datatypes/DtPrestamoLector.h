#ifndef DTPRESTAMOLECTOR
#define DTPRESTAMOLECTOR

#include "DtMaterial.h"

class DtPrestamoLector {
    private:
        string nombreLector;
        DtMaterial * materialesPrestados;
    public:
        DtPrestamoLector();
        DtPrestamoLector(string nombreLector, DtMaterial * materialesPrestados);
        ~DtPrestamoLector();

        string getNombreLector();

        DtMaterial * getMaterialesPrestados();
};
#endif
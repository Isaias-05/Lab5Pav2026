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
        void setNombreLector(string nombreLector);

        DtMaterial * getMaterialesPrestados();
        void setMaterialesPrestados(DtMaterial * materialesPrestados);
};
#endif
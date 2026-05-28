ifndef DTPRESTAMOLECTOR_H
#define DTPRESTAMOLECTOR_H

#include "DtMateriales.h"
#include <set>
using namespace std;

class DtPrestamoLector {
    private:
        string nombreLector;
        set<DtMateriales> materialesPrestados;
    public:
        DtPrestamoLector();
        DtPrestamoLector(string nombreLector, set<DtMateriales> materialesPrestados);
        ~DtPrestamoLector();

        string getNombreLector();
        void setNombreLector(string nombreLector);

        set<DtMateriales> getMaterialesPrestados();
        void setMaterialesPrestados(set<DtMateriales> materialesPrestados);
}
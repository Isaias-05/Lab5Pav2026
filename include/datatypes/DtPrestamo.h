#ifndef DTPRESTAMO
#define DTPRESTAMO

#include "DtFecha.h"
#include <string>
using namespace std;

class DtPrestamo {
    private:
        string idLector;
        string codigoMaterial;
        DtFecha fechaPrestamo;
        int cantDias;
    public:
        DtPrestamo();
        DtPrestamo(string idLector, string codigoMaterial, DtFecha fechaPrestamo, int cantDias);
        ~DtPrestamo();

        string getIdLector();

        string getCodigoMaterial();

        DtFecha getFechaPrestamo();

        int getCantDias();
};
#endif
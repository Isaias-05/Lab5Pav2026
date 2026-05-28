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
        void setIdLector(string idLector);

        string getCodigoMaterial();
        void setCodigoMaterial(string codigoMaterial);

        DtFecha getFechaPrestamo();
        void setFechaPrestamo(DtFecha fechaPrestamo);

        int getCantDias();
        void setCantDias(int cantDias);
};
#endif
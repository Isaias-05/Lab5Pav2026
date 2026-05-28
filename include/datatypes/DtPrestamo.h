#ifndef DT_PRESTAMO
#define DT_PRESTAMO

#include "DtFecha.h"
#include <string>
using namespace std;

class DtPrestamo{
    private:
        int idUsuario;
        string codigoMaterial;
        int cantDias;
        DtFecha fecha;

    public:
        DtPrestamo(int, string, int, DtFecha);

        int getIdUsuario();

        string getCodigoMaterial();

        int getCantDias();

        DtFecha getFecha();
};

#endif
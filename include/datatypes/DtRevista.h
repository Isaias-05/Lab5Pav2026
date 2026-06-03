#ifndef DTREVISTA
#define DTREVISTA

#include "DtMaterial.h"

class DtRevista : public DtMaterial {
    private:
        int numeroEdicion;
        bool publicacionMensual;
    public:
        DtRevista();
        DtRevista(string codigo, string titulo, int anioPublicacion, int numeroEdicion, bool publicacionMensual);
        ~DtRevista();

        int getNumeroEdicion();

        bool getPublicacionMensual();
};
#endif
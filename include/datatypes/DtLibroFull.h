#ifndef DT_LIBRO_FULL
#define DT_LIBRO_FULL

#include "DtMaterialFull.h"

class DtLibroFull : public DtMaterialFull{
    private:
        int numeroEdicion;
        bool publicacionMensual;

    public:
        DtLibroFull(string, string, int, float, TipoMaterial, int, bool);

        int getNumeroEdicion();

        bool getPublicacionMensual();
};

#endif

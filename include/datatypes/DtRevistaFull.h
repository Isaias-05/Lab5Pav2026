#ifndef DTREVISTAFULL
#define DTREVISTAFULL

#include "DtMaterialFull.h"

class DtRevistaFull : public DtMaterialFull {
    private:
        int numeroEdicion;
        bool publicacionMensual;
    public:
        DtRevistaFull();
        DtRevistaFull(string codigo, string titulo, int anioPublicacion, float puntajePromedio, TipoMaterial tipoMaterial, int numeroEdicion, bool publicacionMensual);
        ~DtRevistaFull();

        int getNumeroEdicion();
        void setNumeroEdicion(int numeroEdicion);

        bool getPublicacionMensual();
        void setPublicacionMensual(bool publicacionMensual);
};
#endif
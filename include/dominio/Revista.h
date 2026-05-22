#ifndef REVISTA
#define REVISTA

#include "Material.h"

class Revista: public Material{
    private:
        int numeroEdicion;
        bool publicacionMensual;

    public:
        Revista(string, string, int, float, int, bool);

        int getNumeroEdicion();
        void setNumeroEdicion(int);

        bool getPublicacionMensual();
        void setPublicacionMensual(bool);

        DtMaterialFull getDtMaterialFull() override;

};
#endif
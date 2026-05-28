#ifndef DT_REVISTA_FULL
#define DT_REVISTA_FULL

#include "DtMaterialFull.h"

class DtRevistaFull : public DtMaterialFull{
    private:
        string autor;
        int cantidadPaginas;

    public:
        DtRevistaFull(string, string, int, float, TipoMaterial, string, int);

        string getAutor();

        int getCantidadPaginas();
};

#endif
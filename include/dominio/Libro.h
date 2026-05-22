#ifndef LIBRO
#define LIBRO

#include "Material.h"


class Libro: public Material{
    private:
        string autor;
        int cantidadPaginas;

    public:
        Libro(string, string, int, float, string, int);

        string getAutor();
        void setAutor(string);

        int getCantidadPaginas();
        void setCantidadPaginas(int);

        DtMaterialFull getDtMaterialFull() override;
};
#endif
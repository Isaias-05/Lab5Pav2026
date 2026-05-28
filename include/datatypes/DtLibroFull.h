#ifndef DTLIBROFULL
#define DTLIBROFULL

#include "DtMaterialFull.h"
#include "TipoMaterial.h"
#include <string>
using namespace std;

class DtLibroFull : public DtMaterialFull {
    private:
        string autor; 
        int cantPaginas;
    public:
        DtLibroFull();
        DtLibroFull(string codigo, string titulo, int anioPublicacion, float puntajePromedio, TipoMaterial tipoMaterial,string autor, int cantPaginas);
        ~DtLibroFull();

        int getCantPaginas();
        void setCantPaginas(int cantPaginas);

        string getAutor();
        void setAutor(string autor);
};
#endif
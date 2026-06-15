#ifndef DTLIBRO
#define DTLIBRO

#include "DtMaterial.h"
#include "TipoMaterial.h"
#include <string>
using namespace std;

class DtLibro : public DtMaterial {
    private:
        string autor; 
        int cantPaginas;
    public:
        DtLibro();
        DtLibro(string codigo, string titulo, int anioPublicacion, string autor, int cantPaginas);
        ~DtLibro();

        int getCantPaginas();

        string getAutor();

        string toString();
};
#endif
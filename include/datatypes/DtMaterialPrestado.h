#ifndef DT_MATERIAL_PRESTADO
#define DT_MATERIAL_PRESTADO

#include "DtFecha.h"
#include <string>
using namespace std;

class DtMaterialPrestado{
    private:
        string codigo;
        string titulo;
        DtFecha fecha;
        int cantDias;

    public:
        DtMaterialPrestado(string, string, DtFecha, int);

        string getCodigo();

        string getTitulo();

        DtFecha getFecha();

        int getCantDias();
};

#endif
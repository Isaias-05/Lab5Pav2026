#ifndef DTMATERIALPRESTADO
#define DTMATERIALPRESTADO

#include "DtFecha.h"
#include <string>
using namespace std;

class DtMaterialPrestado {
    private:
        string codigo;
        string titulo;
        DtFecha fechaPrestamo;
        int cantDias;
    public:
        DtMaterialPrestado();
        DtMaterialPrestado(string codigo, string titulo, DtFecha fechaPrestamo, int cantDias);
        ~DtMaterialPrestado();

        string getCodigo();

        string getTitulo();

        DtFecha getFechaPrestamo();

        int getCantDias();

        string toString() const;
};
#endif
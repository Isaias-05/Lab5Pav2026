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
        void setCodigo(string codigo);

        string getTitulo();
        void setTitulo(string titulo);

        DtFecha getFechaPrestamo();
        void setFechaPrestamo(DtFecha fechaPrestamo);

        int getCantDias();
        void setCantDias(int cantDias);
};
#endif
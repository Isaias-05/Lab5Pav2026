#ifndef MATERIALPRESTADO_H
#define MATERIALPRESTADO_H

#include "DtFecha.h"
class DtMaterialPrestado : public DtMaterialBasico {
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
#ifndef DTLIBROFULL_H
#define DTLIBROFULL_H

#include "DtMaterialFull.h"

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
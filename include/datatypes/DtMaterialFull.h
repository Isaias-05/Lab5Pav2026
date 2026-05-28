#ifndef DTMATERIALFULL_H
#define DTMATERIALFULL_H

#include "TipoMaterial.h"

class DtMaterialFull {
    private:
        string codigo;
        string titulo;
        int anioPublicacion;
        float puntajePromedio;
        TipoMaterial tipoMaterial;
    public:
        DtMaterialFull();
        DtMaterialFull(string codigo, string titulo, int anioPublicacion, float puntajePromedio, TipoMaterial tipoMaterial);
        ~DtMaterialFull();

        string getCodigo();
        void setCodigo(string codigo);

        string getTitulo();
        void setTitulo(string titulo);

        int getAnioPublicacion();
        void setAnioPublicacion(int anioPublicacion);

        float getPuntajePromedio();
        void setPuntajePromedio(float puntajePromedio);

        TipoMaterial getTipoMaterial();
        void setTipoMaterial(TipoMaterial tipoMaterial);
}
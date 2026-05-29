#ifndef DTMATERIALFULL
#define DTMATERIALFULL

#include "TipoMaterial.h"
#include <string>
using namespace std;

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

        string getTitulo();

        int getAnioPublicacion();

        float getPuntajePromedio();

        TipoMaterial getTipoMaterial();
};
#endif
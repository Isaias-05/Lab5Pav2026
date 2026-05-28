#ifndef DT_MATERIAL_FULL
#define DT_MATERIAL_FULL

#include "Tipomaterial.h"
#include <string>
using namespace std;

class DtMaterialFull{
    private:
        string codigo;
        string titulo;
        int anioPublicacion;
        float puntajePromedio;
        TipoMaterial tipoMaterial;

    public:
        DtMaterialFull(string, string, int, float, TipoMaterial);


        string getCodigo();

        string getTitulo();

        int getAnioPublicacion();

        float getPuntajePromedio();

        TipoMaterial getTipoMaterial();
};
#endif
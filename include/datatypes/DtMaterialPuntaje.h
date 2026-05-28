#ifndef DT_MATERIAL_PUNTAJE
#define DT_MATERIAL_PUNTAJE

#include <string>
using namespace std;

class DtMaterialPuntaje{
    private:
        string codigo;
        string titulo;
        float puntajePromedio;

    public:
        DtMaterialPuntaje(string, string, float);

        string getCodigo();

        string getTitulo();

        float getPuntajePromedio();
};

#endif
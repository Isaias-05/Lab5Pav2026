#ifndef DTMATERIALPUNTAJE
#define DTMATERIALPUNTAJE

#include <string>
using namespace std;

class DtMaterialPuntaje {
    private:
        string codigo;
        string titulo;
        float puntajePromedio;
        int puntajesRegistrados;
    public:
        DtMaterialPuntaje();
        DtMaterialPuntaje(string codigo, string titulo, float puntajePromedio, int puntajesRegistrados);
        ~DtMaterialPuntaje();

        string getCodigo();

        string getTitulo();

        float getPuntajePromedio();

        int getPuntajesRegistrados();

        string toString();
};
#endif

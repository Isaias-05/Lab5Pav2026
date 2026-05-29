#ifndef DTMATERIALPUNTAJE
#define DTMATERIALPUNTAJE

#include <string>
using namespace std;

class DtMaterialPuntaje {
    private:
        string codigo;
        string titulo;
        float puntajePromedio;
        
    public:
        DtMaterialPuntaje();
        DtMaterialPuntaje(string codigo, string titulo, float puntajePromedio);
        ~DtMaterialPuntaje();

        string getCodigo();

        string getTitulo();

        float getPuntajePromedio();
};
#endif

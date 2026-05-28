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
        void setCodigo(string codigo);

        string getTitulo();
        void setTitulo(string titulo);

        float getPuntajePromedio();
        void setPuntajePromedio(float puntajePromedio);
};
#endif

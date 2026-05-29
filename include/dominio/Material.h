#ifndef MATERIAL
#define MATERIAL
#define MAX_PUNTAJES 100

#include "ManejadorMaterial.h"
#include "DtMaterial.h"
#include "DtMaterialBasico.h"
#include "DtMaterialFull.h"
#include "DtPuntaje.h"
#include "Puntaje.h"

class Material{ 
    private:
        string codigo;
        string titulo;
        int anioPublicacion;
        float PuntajePromedio; 
        Puntaje * puntajes[MAX_PUNTAJES];
        int topePuntajes;
    public:
        Material();
        Material(string, string, int , float);
        ~Material();

        string getCodigo();
        void setCodigo(string);

        string getTitulo();
        void setTitulo(string);

        int getAnioPublicacion();
        void setAnioPublicacion(int);

        float getPuntajePromedio();
        void actualizarPuntaje(float);

        Puntaje** getPuntajes();
        void agregarPuntaje(Puntaje*);

        DtMaterial getDtMaterial();
        DtMaterialBasico getDtMaterialBasico();
        DtPuntaje getDtPuntajeUsuario(string);
        virtual DtMaterialFull getDtMaterialFull() = 0;
};
#endif
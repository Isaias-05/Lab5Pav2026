#ifndef MATERIAL
#define MATERIAL

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
        Puntaje * puntajes;

    public:
        Material(string, string, int , float, Puntaje*);


        string getCodigo();
        void setCodigo(string);

        string getTitulo();
        void setTitulo(string);

        int getAnioPublicacion();
        void setAnioPublicacion(int);

        float getPuntajePromedio();
        void actualizarPuntaje(float);

        Puntaje* getPuntajes();
        void setPuntajes(Puntaje*);

        DtMaterial getDtMaterial();
        DtMaterialBasico getDtMaterialBasico();
        DtPuntaje getDtPuntajeUsuario(string);
        virtual DtMaterialFull getDtMaterialFull() = 0;

};
#endif
#ifndef MATERIAL
#define MATERIAL

#include "DtMaterial.h"
#include "DtMaterialBasico.h"
#include "DtMaterialFull.h"
#include "DtPuntaje.h"
#include "Puntaje.h"

#include <map>
#include <string>
using namespace std;

class Material{ 
    private:
        string codigo;
        string titulo;
        int anioPublicacion;
        float puntajePromedio; 
        // clave: idLector, valor: Puntaje*
        map<string, Puntaje*> puntajes; 
    public:
        Material();
        Material(string, string, int);
        virtual ~Material();

        string getCodigo();
        void setCodigo(string);

        string getTitulo();
        void setTitulo(string);

        int getAnioPublicacion();
        void setAnioPublicacion(int);

        float getPuntajePromedio();
        void actualizarPuntajePromedio();

        const map<string, Puntaje*>& getPuntajes();
        void actualizarPuntaje(int, Lector*);

        DtMaterial getDtMaterial();

        DtMaterialBasico getDtMaterialBasico();
        
        DtPuntaje getDtPuntajeUsuario(string);
        
        virtual DtMaterialFull* getDtMaterialFull() = 0;

        bool tienePuntaje(string);

        void eliminarPuntaje(string);

};
#endif
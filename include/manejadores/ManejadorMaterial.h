#ifndef MANEJADORMATERIAL
#define MANEJADORMATERIAL

#include "Material.h"
#include "DtMaterialBasico.h"

#include <map>
#include <vector>
#include <string>
using namespace std;

class ManejadorMaterial {
    private:
        static ManejadorMaterial* instancia;
        ManejadorMaterial();
        
        map<string, Material*> materiales;
    public:
        
        ~ManejadorMaterial();

        static ManejadorMaterial* getInstancia();
        
        bool agregarMaterial(Material* material);

        Material* obtenerMaterial(string codigo);

        map<string, Material*> obtenerMateriales();

        vector<DtMaterialBasico> obtenerVectorMaterialesBasicos();

        DtMaterialFull* obtenerMaterialFull(string codigo);

        bool isEmpty();

        bool eliminarMaterial(string codigo);

        bool existeMaterial(string codigo);

        void eliminarPuntajesDeLector(string idLector);

    };
#endif
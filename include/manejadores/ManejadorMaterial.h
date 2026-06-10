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
        map<string, Material*> materiales;
        ManejadorMaterial();
    public:
        
        ~ManejadorMaterial();

        static ManejadorMaterial* getInstancia();
        
        bool agregarMaterial(Material* material);

        Material* obtenerMaterial(string codigo);

        map<string, Material*> obtenerMateriales();

        vector<DtMaterialBasico> obtenerVectorMaterialesBasicos();

        bool eliminarMaterial(string codigo);
    };
#endif
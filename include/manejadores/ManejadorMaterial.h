#ifndef MANEJADORMATERIAL
#define MANEJADORMATERIAL

#include "Material.h"

#include <map>
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

        bool eliminarMaterial(string codigo);
    };
#endif
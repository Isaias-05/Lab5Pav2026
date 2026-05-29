#ifndef MANEJADORMATERIAL_H
#define MANEJADORMATERIAL_H

#include "Material.h"
#include <map>
#include <string>
using namespace std;
class ManejadorMaterial {
    private:
        static ManejadorMaterial* instancia;
        map<string, Material*> Materiales;
        ManejadorMaterial();
    public:
        
        ~ManejadorMaterial();

        static ManejadorMaterial* getInstancia();
        
        void agregarMaterial(Material* material);

        Material* obtenerMaterial(string codigo);

        map<string, Material*> obtenerMateriales();

        void eliminarMaterial(string codigo);
    };
#endif
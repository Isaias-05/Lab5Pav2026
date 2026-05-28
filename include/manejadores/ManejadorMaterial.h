#ifndef MANEJADORMATERIAL_H
#define MANEJADORMATERIAL_H

#include "Material.h"

class ManejadorMaterial {
    private:
        static ManejadorMaterial* instancia;
        set<Material*> materiales;
        ManejadorMaterial();
    public:
        
        ~ManejadorMaterial();

        static ManejadorMaterial* getInstancia();
        
        void agregarMaterial(Material* material);

        Material* obtenerMaterial(string codigo);

        set<Material*> obtenerMateriales();

        void eliminarMaterial(string codigo);
}
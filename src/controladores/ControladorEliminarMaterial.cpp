#include "ControladorEliminarMaterial.h"

ControladorEliminarMaterial::ControladorEliminarMaterial() {}
ControladorEliminarMaterial::~ControladorEliminarMaterial() {}


vector<DtMaterialBasico*> ControladorEliminarMaterial::listarMateriales() {
    ManejadorMaterial* manejadorMaterial = ManejadorMaterial::getInstancia();
    vector<DtMaterialBasico*> copiaMateriales = manejadorMaterial->obtenerVectorMaterialesBasicos();
    return copiaMateriales;
}
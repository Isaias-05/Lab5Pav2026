#include "ControladorEliminarMaterial.h"

ControladorEliminarMaterial::ControladorEliminarMaterial() {}
ControladorEliminarMaterial::~ControladorEliminarMaterial() {}

vector<DtMaterialBasico> ControladorEliminarMaterial::listarMateriales() {
    ManejadorMaterial* manejadorMaterial = ManejadorMaterial::getInstancia();
    vector<DtMaterialBasico> copiaMateriales = manejadorMaterial->obtenerVectorMaterialesBasicos();
    return copiaMateriales;
}

DtMaterialBasico ControladorEliminarMaterial::seleccionarMaterial(string codigo) {
	ManejadorMaterial* manejadorMaterial = ManejadorMaterial::getInstancia();
    Material* material = manejadorMaterial->obtenerMaterial(codigo);
	
    if (material == nullptr) 
        throw invalid_argument("ERROR: No existe un material con codigo: " + codigo + " En el Sistema\n");
    else
        return material->getDtMaterialBasico();
}

void ControladorEliminarMaterial::confirmar(string codigo) {
    ManejadorMaterial* manejadorMaterial = ManejadorMaterial::getInstancia();
    bool eliminado = manejadorMaterial->eliminarMaterial(codigo);
    if(!eliminado)
        throw invalid_argument("ERROR: No se pudo eliminar el material con codigo: " + codigo + "\n");

}

bool ControladorEliminarMaterial::isEmpty(){
    ManejadorMaterial* manejadorMaterial = ManejadorMaterial::getInstancia();
    return manejadorMaterial->isEmpty();
}
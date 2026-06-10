#include "ControladorEliminarMaterial.h"

ControladorEliminarMaterial::ControladorEliminarMaterial() {}
ControladorEliminarMaterial::~ControladorEliminarMaterial() {}

vector<DtMaterialBasico> ControladorEliminarMaterial::listarMateriales() {
    ManejadorMaterial* manejadorMaterial = ManejadorMaterial::getInstancia();
    vector<DtMaterialBasico> copiaMateriales = manejadorMaterial->obtenerVectorMaterialesBasicos();
    return copiaMateriales;
}

DtMaterialBasico ControladorEliminarMaterial::seleccionarMaterial(string codigo) {
	// Implementar lógica aquí
	return DtMaterialBasico();
}

void ControladorEliminarMaterial::confirmar() {
	// Implementar lógica aquí
}
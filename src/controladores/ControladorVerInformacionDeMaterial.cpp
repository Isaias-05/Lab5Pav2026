#include "ControladorVerInformacionDeMaterial.h"

ControladorVerInformacionDeMaterial::ControladorVerInformacionDeMaterial() {}
ControladorVerInformacionDeMaterial::~ControladorVerInformacionDeMaterial() {}

vector<DtMaterialBasico> ControladorVerInformacionDeMaterial::listarMateriales() {
	ManejadorMaterial* manejadorMaterial = ManejadorMaterial::getInstancia();
	vector<DtMaterialBasico> copiaMateriales = manejadorMaterial->obtenerVectorMaterialesBasicos();
	return copiaMateriales;
}

DtMaterialFull* ControladorVerInformacionDeMaterial::seleccionarMaterial(string codigo) {
	ManejadorMaterial* manejadorMaterial = ManejadorMaterial::getInstancia();
	Material* material = manejadorMaterial->obtenerMaterial(codigo);
	if (material != nullptr) {
		return material->getDtMaterialFull();
	}else{
		throw invalid_argument("ERROR: No existe un material con codigo: " + codigo + " En el Sistema\n");
	}
	
}

bool ControladorVerInformacionDeMaterial::isEmpty(){
	ManejadorMaterial* manejadorMaterial = ManejadorMaterial::getInstancia();
	return manejadorMaterial->isEmpty();
}
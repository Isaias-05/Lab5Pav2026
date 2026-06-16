#include "ControladorPuntuarMaterial.h"

ControladorPuntuarMaterial::ControladorPuntuarMaterial() {}
ControladorPuntuarMaterial::~ControladorPuntuarMaterial() {}

vector<DtMaterialBasico> ControladorPuntuarMaterial::listarMateriales() {
	ManejadorMaterial* manejadorMaterial = ManejadorMaterial::getInstancia();
	return manejadorMaterial->obtenerVectorMaterialesBasicos();
}

DtMaterialBasico ControladorPuntuarMaterial::seleccionarMaterial(string codigo) {
	
	ManejadorMaterial* manejadorMaterial = ManejadorMaterial::getInstancia();
	
	if(manejadorMaterial->existeMaterial(codigo)){
		materialSeleccionado = manejadorMaterial->obtenerMaterial(codigo);
		return materialSeleccionado->getDtMaterialBasico();
	}else
		throw invalid_argument("Codigo de material no encontrado");
}

DtPuntaje ControladorPuntuarMaterial::obtenerPuntaje(string idLector) {
	idLectorSeleccionado = idLector;
	return materialSeleccionado->getDtPuntajeUsuario(idLector);
}

void ControladorPuntuarMaterial::puntuarMaterial(int puntaje) {
	
}

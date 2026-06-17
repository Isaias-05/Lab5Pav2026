#include "ControladorConsultarPuntajesDeMaterial.h"

ControladorConsultarPuntajesDeMaterial::ControladorConsultarPuntajesDeMaterial() {}

ControladorConsultarPuntajesDeMaterial::~ControladorConsultarPuntajesDeMaterial() {}

vector<DtMaterialBasico> ControladorConsultarPuntajesDeMaterial::listarMateriales() {
	return ManejadorMaterial::getInstancia()->obtenerVectorMaterialesBasicos();
}

DtMaterialPuntaje ControladorConsultarPuntajesDeMaterial::seleccionarMaterial(string codigo) {

	ManejadorMaterial* manejadorMaterial = ManejadorMaterial::getInstancia();

	if (manejadorMaterial->existeMaterial(codigo)) {
		Material* material = manejadorMaterial->obtenerMaterial(codigo);
		return DtMaterialPuntaje(material->getCodigo(), material->getTitulo(), material->getPuntajePromedio(), material->getPuntajes().size());
	}
	
	throw invalid_argument("Material no encontrado");
}

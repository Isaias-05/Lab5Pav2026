#include "ControladorConsultarPuntajesDeMaterial.h"

ControladorConsultarPuntajesDeMaterial::ControladorConsultarPuntajesDeMaterial() {}

ControladorConsultarPuntajesDeMaterial::~ControladorConsultarPuntajesDeMaterial() {}

vector<DtMaterialBasico> ControladorConsultarPuntajesDeMaterial::listarMateriales() {
	return ManejadorMaterial::getInstancia()->obtenerVectorMaterialesBasicos();
}

DtMaterialPuntaje ControladorConsultarPuntajesDeMaterial::seleccionarMaterial(string codigo) {

	vector<DtMaterialBasico> vector = ControladorConsultarPuntajesDeMaterial::listarMateriales();
	int vectorSize = vector.size(), count = 0;

	while(count < vectorSize) {
		if (vector.at(count).getCodigo() == codigo) {
			Material* material = ManejadorMaterial::getInstancia()->obtenerMaterial(codigo);
			return DtMaterialPuntaje(material->getCodigo(), material->getTitulo(), material->getPuntajePromedio(), material->getPuntajes().size());
		}
		count++;
	}

	throw invalid_argument("Material no encontrado");
}

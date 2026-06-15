#include "ControladorConsultarPuntajesDeMaterial.h"

ControladorConsultarPuntajesDeMaterial::ControladorConsultarPuntajesDeMaterial() {}

ControladorConsultarPuntajesDeMaterial::~ControladorConsultarPuntajesDeMaterial() {}

vector<DtMaterialBasico> ControladorConsultarPuntajesDeMaterial::listarMateriales() {
	return ManejadorMaterial::getInstancia()->obtenerVectorMaterialesBasicos();
}

DtMaterialPuntaje ControladorConsultarPuntajesDeMaterial::seleccionarMaterial(string codigo) {

	vector<DtMaterialBasico> vector = ControladorConsultarPuntajesDeMaterial::listarMateriales();
	int vectorSize = vector.size(), count = 0;
	bool encontrado = false;

	while(count < vectorSize) {
		if (vector[count].getCodigo() == codigo) {
			Material* material = ManejadorMaterial::getInstancia()->obtenerMaterial(codigo);
			encontrado = true;
			return DtMaterialPuntaje(material->getCodigo(), material->getTitulo(), material->getPuntajePromedio());
		}
		count++;
	}
	
	if (!encontrado) {
		throw invalid_argument("Material no encontrado");
	}
}

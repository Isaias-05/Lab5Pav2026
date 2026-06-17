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

DtPuntaje ControladorPuntuarMaterial::obtenerPuntaje() {
	
	Sesion* sesion = Sesion::getInstancia();

	lectorSeleccionado = dynamic_cast<Lector*>(sesion->getUsuario());
    
	if (lectorSeleccionado == nullptr) throw invalid_argument("Usuario no es un lector");

	return materialSeleccionado->getDtPuntajeUsuario(lectorSeleccionado->getId());
}

void ControladorPuntuarMaterial::puntuarMaterial(int valorPuntaje) {
	materialSeleccionado->actualizarPuntaje(valorPuntaje, lectorSeleccionado);
}

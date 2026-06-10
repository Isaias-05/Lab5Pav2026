#include "ManejadorMaterial.h"

ManejadorMaterial* ManejadorMaterial::instancia = nullptr;

ManejadorMaterial::ManejadorMaterial() {}

ManejadorMaterial::~ManejadorMaterial() {}

ManejadorMaterial* ManejadorMaterial::getInstancia() {
    if (instancia == nullptr) {
        instancia = new ManejadorMaterial();
    }
    return instancia;
}

bool ManejadorMaterial::agregarMaterial(Material* material) {
    map<string, Material*>::iterator iterador = materiales.find(material->getCodigo());
    if (iterador == materiales.end()) {
        materiales.insert({material->getCodigo(), material});
        return true;
    } else {
        return false; 
    }
}

Material* ManejadorMaterial::obtenerMaterial(string codigo) {
    map<string, Material*>::iterator iterador = materiales.find(codigo);
    if (iterador != materiales.end()) {
        return iterador->second;
    } else {
        return nullptr; 
    }
}

map<string, Material*> ManejadorMaterial::obtenerMateriales() {
    return materiales;
}

vector<DtMaterialBasico> ManejadorMaterial::obtenerVectorMaterialesBasicos() {
    vector<DtMaterialBasico> copiaMateriales;
    for (const auto& i : materiales) {
        copiaMateriales.push_back(i.second->getDtMaterialBasico());
    }
    return copiaMateriales;
}


bool ManejadorMaterial::eliminarMaterial(string codigo) {
    map<string, Material*>::iterator iterador = materiales.find(codigo);
    if (iterador != materiales.end()) {
        materiales.erase(iterador);
        return true;
    } else {
        return false; 
    }
}
#include "Material.h"

Material::Material() {
    this->codigo = "";
    this->titulo = "";
    this->anioPublicacion = 0;
    this->PuntajePromedio = 0.0;
    this->puntajes.clear();
}

Material::Material(string codigo, string titulo, int anioPublicacion, float PuntajePromedio) {
    this->codigo = codigo;
    this->titulo = titulo;
    this->anioPublicacion = anioPublicacion;
    this->PuntajePromedio = PuntajePromedio;
    this->puntajes.clear();
}

Material::~Material() {
    /*pair es cada elemento del map.
    pair.first es la clave (string con el id del lector).
    pair.second es el valor (Puntaje*, puntero a un objeto Puntaje).*/
    for (auto& pair : puntajes) {
        delete pair.second; 
    }
}

string Material::getCodigo() {
    return codigo;
}

void Material::setCodigo(string codigo) {
    this->codigo = codigo;
}

string Material::getTitulo() {
    return titulo;
}

void Material::setTitulo(string titulo) {
    this->titulo = titulo;
}

int Material::getAnioPublicacion() {
    return anioPublicacion;
}

void Material::setAnioPublicacion(int anioPublicacion) {
    this->anioPublicacion = anioPublicacion;
}

float Material::getPuntajePromedio() {
    return PuntajePromedio;
}

void Material::actualizarPuntaje(float nuevoPuntaje) {}

const map<string, Puntaje*>& Material::getPuntajes() {
    return puntajes;
}

void Material::agregarPuntaje(Puntaje* puntaje) {
    this->puntajes[puntaje->getLector()->getId()] = puntaje;
}

DtMaterial Material::getDtMaterial() {
    return DtMaterial(this->codigo, this->titulo, this->anioPublicacion);
}

DtMaterialBasico Material::getDtMaterialBasico() {
    return DtMaterialBasico(this->codigo, this->titulo);
}

DtPuntaje Material::getDtPuntajeUsuario(string idUsuario) {
    //Verifica si el usuario ha dado un puntaje a este material
    if (puntajes.find(idUsuario) != puntajes.end()) {
        return DtPuntaje(idUsuario, this->codigo, puntajes[idUsuario]->getValor());
    } else {
        // Si el usuario no ha dado un puntaje, devuelve un DtPuntaje vacío
        return DtPuntaje();
    }
}
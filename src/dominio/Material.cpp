#include "Material.h"

Material::Material() {
    this->codigo = "";
    this->titulo = "";
    this->anioPublicacion = 0;
    this->PuntajePromedio = 0.0;
    this->topePuntajes = 0;
}

Material::Material(string codigo, string titulo, int anioPublicacion, float PuntajePromedio) {
    this->codigo = codigo;
    this->titulo = titulo;
    this->anioPublicacion = anioPublicacion;
    this->PuntajePromedio = PuntajePromedio;
    this->topePuntajes = 0;
}

Material::~Material() {
    delete[] puntajes;
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

Puntaje** Material::getPuntajes() {
    return puntajes;
}

void Material::agregarPuntaje(Puntaje* puntaje) {
    this->puntajes[topePuntajes] = puntaje;
    this->topePuntajes ++;
}

DtMaterial Material::getDtMaterial() {
    return DtMaterial(this->codigo, this->titulo, this->anioPublicacion);
}

DtMaterialBasico Material::getDtMaterialBasico() {
    return DtMaterialBasico(this->codigo, this->titulo);
}

DtPuntaje Material::getDtPuntajeUsuario(string idUsuario) {
    for (Puntaje * puntaje : puntajes) {
        if (puntaje->getLector()->getId() == idUsuario)
            return DtPuntaje(idUsuario, this->codigo, puntaje->getValor());
    }
}
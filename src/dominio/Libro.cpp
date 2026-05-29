#include "Libro.h"
#include "DtLibroFull.h"

Libro::Libro(string codigo, string titulo, int anioPublicacion, float PuntajePromedio, string autor, int cantidadPaginas): Material(codigo, titulo, anioPublicacion, PuntajePromedio) {
    this->autor = autor;
    this->cantidadPaginas = cantidadPaginas;
}

string Libro::getAutor() {
    return autor;
}

void Libro::setAutor(string autor) {
    this->autor = autor;
}

int Libro::getCantidadPaginas() {
    return cantidadPaginas;
}

void Libro::setCantidadPaginas(int cantidadPaginas) {
    this->cantidadPaginas = cantidadPaginas;
}

DtMaterialFull Libro::getDtMaterialFull() {
    return DtLibroFull(this->getCodigo(), this->getTitulo(), this->getAnioPublicacion(), this->getPuntajePromedio(), TipoMaterial::Libro, this->autor, this->cantidadPaginas);
}
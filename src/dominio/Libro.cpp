#include "Libro.h"
#include "DtLibroFull.h"

Libro::Libro(string codigo, string titulo, int anioPublicacion, string autor, int cantidadPaginas): Material(codigo, titulo, anioPublicacion) {
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

DtMaterialFull* Libro::getDtMaterialFull() {
    return new DtLibroFull(this->getCodigo(), this->getTitulo(), this->getAnioPublicacion(), this->getPuntajePromedio(), TipoMaterial::TM_LIBRO, this->autor, this->cantidadPaginas);
}
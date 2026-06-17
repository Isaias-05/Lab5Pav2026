#include "DtLibroFull.h"

DtLibroFull::DtLibroFull(){}

DtLibroFull::DtLibroFull(string codigo, string titulo, int anioPublicacion, float puntajePromedio, TipoMaterial tipoMaterial,string autor, int cantPaginas) : DtMaterialFull(codigo, titulo, anioPublicacion, puntajePromedio, tipoMaterial){
    this->autor = autor;
    this->cantPaginas = cantPaginas;
}

DtLibroFull::~DtLibroFull(){}

int DtLibroFull::getCantPaginas(){
    return this->cantPaginas;
}

string DtLibroFull::getAutor(){
    return this->autor;
}

string DtLibroFull::toString(){
    return  "Codigo: " + getCodigo() + 
        "\nTitulo: " + getTitulo() + 
        "\nAnio de Publicacion: " + to_string(getAnioPublicacion()) + 
        "\nTipo de Material: Libro" +
        "\nPuntaje Promedio: " + to_string(getPuntajePromedio()) + 
        "\nAutor: " + this->autor + 
        "\nCantidad de Paginas: " + to_string(this->cantPaginas);

      ;
}
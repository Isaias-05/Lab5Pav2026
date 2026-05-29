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
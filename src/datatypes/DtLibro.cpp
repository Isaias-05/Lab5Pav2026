#include "DtLibro.h"

DtLibro::DtLibro(){}

DtLibro::DtLibro(string codigo, string titulo, int anioPublicacion, string autor, int cantPaginas) : DtMaterial(codigo, titulo, anioPublicacion){
    this->autor = autor;
    this->cantPaginas = cantPaginas;
}

DtLibro::~DtLibro(){}

int DtLibro::getCantPaginas(){
    return this->cantPaginas;
}

string DtLibro::getAutor(){
    return this->autor;
}

string DtLibro::toString(){
    return DtMaterial::toString() + "\nAutor: " + this->autor + "\nCantidad de Paginas: " + to_string(this->cantPaginas);
}
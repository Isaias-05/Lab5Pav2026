#include "DtFecha.h"

DtFecha::DtFecha(){}

DtFecha::DtFecha(int dia, int mes, int anio, int hora, int minuto){
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
    this->hora = hora;
    this->minuto = minuto;
}

DtFecha::~DtFecha(){}

int DtFecha::getDia() const{
    return this->dia;
}

int DtFecha::getMes() const{
    return this->mes;
}

int DtFecha::getAnio() const{
    return this->anio;
}

int DtFecha::getHora() const{
    return this->hora;
}

int DtFecha::getMinuto() const{
    return this->minuto;
}

string DtFecha::toString() const {
    return "[" + to_string(dia) + "/" + to_string(mes) + "/" + to_string(anio) + " " + to_string(hora) + ":" + to_string(minuto) + "]";
}
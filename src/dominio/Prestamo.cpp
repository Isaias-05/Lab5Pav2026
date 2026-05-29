#include "Prestamo.h"

Prestamo::Prestamo()
{
    this->material = NULL;
    this->fechaPrestamo = DtFecha();
    this->diasPermitidos = 0;
}

Prestamo::Prestamo(string codigo, Material* material, DtFecha fechaPrestamo, int diasPermitidos)
{
    this->material = material;
    this->fechaPrestamo = fechaPrestamo;
    this->diasPermitidos = diasPermitidos;
}

Prestamo::~Prestamo()
{
    delete material;
}

Material* Prestamo::getMaterial()
{
    return this->material;
}

void Prestamo::setMaterial(Material* material)
{
    this->material = material;
}

DtFecha Prestamo::getFechaPrestamo()
{
    return this->fechaPrestamo;
}

void Prestamo::setFechaPrestamo(DtFecha fechaPrestamo)
{
    this->fechaPrestamo = fechaPrestamo;
}

int Prestamo::getDiasPermitidos()
{
    return this->diasPermitidos;
}

void Prestamo::setDiasPermitidos(int diasPermitidos)
{
    this->diasPermitidos = diasPermitidos;
}

DtMaterialPrestado Prestamo::getDtMaterialPrestado()
{
    return DtMaterialPrestado(this->material->getCodigo(), this->material->getTitulo(), this->fechaPrestamo, this->diasPermitidos);
}
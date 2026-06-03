#ifndef PRESTAMO
#define PRESTAMO

#include <iostream>
#include <string>
using namespace std;

#include "DtFecha.h"
#include "DtMaterialPrestado.h"

class Material; //Declaracion forward para evitar dependencias circualres. 

class Prestamo
{
    private:
        Material* material;
        DtFecha fechaPrestamo;
        int diasPermitidos;
    
    public:
        Prestamo();
        Prestamo(string, Material*, DtFecha, int);
        ~Prestamo();


        Material* getMaterial();
        void setMaterial(Material*);

        DtFecha getFechaPrestamo();
        void setFechaPrestamo(DtFecha);

        int getDiasPermitidos();
        void setDiasPermitidos(int);

        DtMaterialPrestado getDtMaterialPrestado();
};
    

#endif
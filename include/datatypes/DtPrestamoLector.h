#ifndef DT_PRESTAMO_LECTOR
#define DT_PRESTAMO_LECTOR

#include "DtMaterialPrestado.h"
#include <string>
using namespace std;

class DtPrestamoLector{
    private:
        string nombre;
        DtMaterialPrestado * materialesPrestados; 

    public:
        DtPrestamoLector(string, DtMaterialPrestado*);

        string getNombre();

        DtMaterialPrestado* getMaterialesPrestados();
};

#endif
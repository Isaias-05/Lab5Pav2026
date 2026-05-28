#ifndef ICONTROLADORREGISTRARPRESTAMO_H
#define ICONTROLADORREGISTRARPRESTAMO_H

#include "DtLector.h"
#include "DtMaterial.h"
#include "DtFecha.h"
#include "DtPrestamo.h"
#include <string>
using std::string;

class IControladorRegistrarPrestamo {
    public:

    	~IControladorRegistrarPrestamo() {};

        virtual DtLector obtenerLector(string) = 0;
        virtual DtMaterial obtenerMaterial(string) = 0;
        virtual DtPrestamo registrarPrestamo(DtFecha, int, DtFecha) = 0;
        virtual void confirmar() = 0;
};

#endif //
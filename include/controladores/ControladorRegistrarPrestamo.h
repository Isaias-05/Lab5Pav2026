#ifndef CONTROLADORREGISTRARPRESTAMO
#define CONTROLADORREGISTRARPRESTAMO

#include "Lector.h"
#include "ManejadorUsuario.h"
#include "Material.h"
#include "ManejadorMaterial.h"

#include "IControladorRegistrarPrestamo.h"
#include "DtLector.h"
#include "DtMaterial.h"
#include "DtFecha.h"
#include "DtPrestamo.h"
#include <string>
using std::string;

class ControladorRegistrarPrestamo: public IControladorRegistrarPrestamo {
    public:
        ControladorRegistrarPrestamo();
	    ~ControladorRegistrarPrestamo();

        DtLector obtenerLector(string) override;
        DtMaterial obtenerMaterial(string) override;
        DtPrestamo registrarPrestamo(DtFecha, int, DtFecha) override;
        void confirmar() override;
};

#endif // CONTROLADORREGISTRARPRESTAMO
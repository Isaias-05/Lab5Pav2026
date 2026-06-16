#ifndef ICONTROLADORCAMBIARFECHAACTUALDELSISTEMA
#define ICONTROLADORCAMBIARFECHAACTUALDELSISTEMA

#include "DtFecha.h"

class IControladorCambiarFechaActualDelSistema {
    public:
        virtual ~IControladorCambiarFechaActualDelSistema() {}

        virtual DtFecha cambiarFechaActualDelSistema(int, int, int, int, int) = 0;

        virtual void confirmar() = 0;
};

#endif //ICONTROLADORCAMBIARFECHAACTUALDELSISTEMA
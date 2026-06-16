#ifndef ICONTROLADORVERFECHAACTUALDELSISTEMA
#define ICONTROLADORVERFECHAACTUALDELSISTEMA

#include "DtFecha.h"

class IControladorVerFechaActualDelSistema {
    public:
        virtual ~IControladorVerFechaActualDelSistema() {}

        virtual DtFecha verFechaActualDelSistema() = 0;
};

#endif //ICONTROLADORVERFECHAACTUALDELSISTEMA
#ifndef CONTROLADORVERFECHAACTUALDELSISTEMA
#define CONTROLADORVERFECHAACTUALDELSISTEMA

#include "IControladorVerFechaActualDelSistema.h"

class ControladorVerFechaActualDelSistema : public IControladorVerFechaActualDelSistema {
public:
    ControladorVerFechaActualDelSistema();
    ~ControladorVerFechaActualDelSistema();

    DtFecha verFechaActualDelSistema() override;
};

#endif //CONTROLADORVERFECHAACTUALDELSISTEMA
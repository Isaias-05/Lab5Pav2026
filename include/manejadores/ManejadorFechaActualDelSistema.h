#ifndef MANEJADORFECHAACTUALDELSISTEMA
#define MANEJADORFECHAACTUALDELSISTEMA

#include "DtFecha.h"

class ManejadorFechaActualDelSistema {
private:
    static ManejadorFechaActualDelSistema* instancia;
    ManejadorFechaActualDelSistema();

    DtFecha fechaActualDelSistema;
public:

    ~ManejadorFechaActualDelSistema();

    static ManejadorFechaActualDelSistema* getInstancia();

    DtFecha getFechaActualDelSistema();
    void setFechaActualDelSistema(DtFecha fechaActualDelSistema);
};

#endif
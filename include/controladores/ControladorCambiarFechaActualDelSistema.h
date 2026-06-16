#ifndef CONTROLADORCAMBIARFECHAACTUALDELSISTEMA
#define CONTROLADORCAMBIARFECHAACTUALDELSISTEMA

#include "IControladorCambiarFechaActualDelSistema.h"

class ControladorCambiarFechaActualDelSistema : public IControladorCambiarFechaActualDelSistema {
private:
    int dia;
    int mes;
    int anio;
    int hora;
    int minuto;
public:
    ControladorCambiarFechaActualDelSistema();
    ~ControladorCambiarFechaActualDelSistema();

    DtFecha cambiarFechaActualDelSistema(int dia, int mes, int anio, int hora, int minuto) override;

    void confirmar() override;
};

#endif //CONTROLADORCAMBIARFECHAACTUALDELSISTEMA
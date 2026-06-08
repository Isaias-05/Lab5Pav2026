#ifndef MANEJADORSESION
#define MANEJADORSESION

#include "Sesion.h"

class ManejadorSesion {
private:
    static ManejadorSesion* instancia;
    Sesion* sesionActiva;

    ManejadorSesion();
public:
    ~ManejadorSesion();

    static ManejadorSesion* getInstancia();

    void iniciarSesion(Sesion* sesion);
    void cerrarSesion();
    Sesion* getSesionActiva();
    bool haySesionActiva() const;
};

#endif // MANEJADORSESION
#ifndef FABRICA
#define FABRICA

#include "IControladorCerrarSesion.h"
#include "IControladorConsultarPuntajeMaterial.h"
#include "IControladorEliminarLector.h"
#include "IControladorEliminarMaterial.h"
#include "IControladorIniciarSesion.h"
#include "IControladorPrestamoLector.h"
#include "IControladorPuntuarMaterial.h"
#include "IControladorRegistrarFuncionario.h"
#include "IControladorRegistrarLector.h"
#include "IControladorRegistrarMaterial.h"
#include "IControladorRegistrarPrestamo.h"
#include "IControladorVerInformacionMaterial.h"

class Fabrica {
public:
    static IControladorCerrarSesion* getControladorCerrarSesion();
    static IControladorConsultarPuntajeMaterial* getControladorConsultarPuntajeMaterial();
    static IControladorEliminarLector* getControladorEliminarLector();
    static IControladorEliminarMaterial* getControladorEliminarMaterial();
    static IControladorIniciarSesion* getControladorIniciarSesion();
    static IControladorPrestamoLector* getControladorPrestamoLector();
    static IControladorPuntuarMaterial* getControladorPuntuarMaterial();
    static IControladorRegistrarFuncionario* getControladorRegistrarFuncionario();
    static IControladorRegistrarLector* getControladorRegistrarLector();
    static IControladorRegistrarMaterial* getControladorRegistrarMaterial();
    static IControladorRegistrarPrestamo* getControladorRegistrarPrestamo();
    static IControladorVerInformacionMaterial* getControladorVerInformacionMaterial();
};

#endif // FABRICA
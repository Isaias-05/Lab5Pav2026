#ifndef FABRICA
#define FABRICA

//Obligatorios
#include "IControladorIniciarSesion.h"
#include "IControladorCerrarSesion.h"
#include "IControladorRegistrarLector.h"
#include "IControladorRegistrarFuncionario.h"
#include "IControladorRegistrarMaterial.h"
#include "IControladorRegistrarPrestamo.h"
#include "IControladorConsultarPrestamosDeLector.h"
#include "IControladorVerInformacionDeMaterial.h"

//Opcionales
#include "IControladorPuntuarMaterial.h"
#include "IControladorConsultarPuntajesDeMaterial.h"
#include "IControladorEliminarLector.h"
#include "IControladorEliminarMaterial.h"

//Extra
#include "IControladorVerificarSesion.h"

//Fecha del sistema
#include "IControladorVerFechaActualDelSistema.h"
#include "IControladorCambiarFechaActualDelSistema.h"

class Fabrica {
private:
    static Fabrica* instancia;
    Fabrica();
public:
    static Fabrica* getInstancia();
    
    //Obligatorios
    static IControladorIniciarSesion* getControladorIniciarSesion();
    static IControladorCerrarSesion* getControladorCerrarSesion();
    static IControladorRegistrarLector* getControladorRegistrarLector();
    static IControladorRegistrarFuncionario* getControladorRegistrarFuncionario();
    static IControladorRegistrarMaterial* getControladorRegistrarMaterial();
    static IControladorRegistrarPrestamo* getControladorRegistrarPrestamo();
    static IControladorConsultarPrestamosDeLector* getControladorConsultarPrestamosDeLector();
    static IControladorVerInformacionDeMaterial* getControladorVerInformacionDeMaterial();

    //Opcionales
    static IControladorPuntuarMaterial* getControladorPuntuarMaterial();
    static IControladorConsultarPuntajesDeMaterial* getControladorConsultarPuntajesDeMaterial();
    static IControladorEliminarLector* getControladorEliminarLector();
    static IControladorEliminarMaterial* getControladorEliminarMaterial();

    //Extra
    static IControladorVerificarSesion* getControladorVerificarSesion();

    //Fecha del sistema
    static IControladorVerFechaActualDelSistema* getControladorVerFechaActualDelSistema();
    static IControladorCambiarFechaActualDelSistema* getControladorCambiarFechaActualDelSistema();

    ~Fabrica();
};

#endif // FABRICA
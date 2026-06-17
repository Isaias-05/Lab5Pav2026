#include "ControladorEliminarLector.h"
#include "ManejadorUsuario.h"
#include "ManejadorMaterial.h"


ControladorEliminarLector::ControladorEliminarLector() {}

ControladorEliminarLector::~ControladorEliminarLector() {}

DtLector ControladorEliminarLector::consultarLector(string idUsuario) {
    Lector * lector = dynamic_cast<Lector*>(ManejadorUsuario::getInstancia()->obtenerUsuario(idUsuario));
    if (lector != nullptr) {
        return lector->getDtLector();
    }else{
        throw invalid_argument("ERROR: No existe un lector con Id '" + idUsuario + "' en el sistema.");
    }
}

void ControladorEliminarLector::confirmar(string idUsuario) {
// Pre: El lector debe existir. 
    ManejadorUsuario * manejadorUsuario = ManejadorUsuario::getInstancia();
    ManejadorMaterial * manejadorMaterial = ManejadorMaterial::getInstancia();
    try {
        manejadorMaterial->eliminarPuntajesDeLector(idUsuario);
    } catch (const invalid_argument& e) {
        throw e;
    }
    bool eliminado = manejadorUsuario->eliminarUsuario(idUsuario);
    if(!eliminado)
        throw invalid_argument("ERROR: No se pudo eliminar el lector con ID ' " + idUsuario + " ' .\n");

}
#include "ControladorEliminarLector.h"

ControladorEliminarLector::ControladorEliminarLector() {}

ControladorEliminarLector::~ControladorEliminarLector() {}

DtLector ControladorEliminarLector::consultarLector(string idUsuario) {
    Lector * lector = dynamic_cast<Lector*>(ManejadorUsuario::getInstancia()->obtenerUsuario(idUsuario));
    if (lector != nullptr) {
        return lector->getDtLector();
    }else{
        throw invalid_argument("ERROR: No existe un lector con ID: " + idUsuario + " En el Sistema\n");
    }
}

void ControladorEliminarLector::confirmar(string idUsuario) {
// Pre: El lector debe existir. 
    ManejadorUsuario * manejadorUsuario = ManejadorUsuario::getInstancia();
 
    bool eliminado = manejadorUsuario->eliminarUsuario(idUsuario);
    if(!eliminado)
        throw invalid_argument("ERROR: No se pudo eliminar el lector con ID: " + idUsuario + "\n");
}
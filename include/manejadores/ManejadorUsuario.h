#ifndef MANEJADORUSUARIO_H
#define MANEJADORUSUARIO_H  

#include "Usuario.h"

class ManejadorUsuario{
    private:
        static ManejadorUsuario* instancia;
        set<Usuario*> usuarios;
        ManejadorUsuario();
    public:
        ~ManejadorUsuario();

        static ManejadorUsuario* getInstancia();
        
        void agregarUsuario(Usuario* usuario);

        Usuario* obtenerUsuario(string idUsuario);

        set<Usuario*> obtenerUsuarios();

        void eliminarUsuario(string idUsuario);

};
#endif
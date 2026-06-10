
#ifndef MANEJADORUSUARIO
#define MANEJADORUSUARIO

#include "Usuario.h"

#include <map>
#include <string>
using namespace std;

class ManejadorUsuario{
    private:
        static ManejadorUsuario* instancia;
        map<string, Usuario*> usuarios;
        ManejadorUsuario();
    public:
        ~ManejadorUsuario();

        static ManejadorUsuario* getInstancia();
        
        void agregarUsuario(Usuario* usuario);

        Usuario* obtenerUsuario(string idUsuario);

        map<string, Usuario*> obtenerUsuarios();

        bool eliminarUsuario(string idUsuario);

};
#endif
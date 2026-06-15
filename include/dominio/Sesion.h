#ifndef SESION
#define SESION

#include <string>
#include "Usuario.h"
using namespace std;

class Sesion{
    private:
        Usuario* usuario;
        static Sesion* instancia;
        Sesion();
    public:
        static Sesion* getInstancia();

        ~Sesion();

        Usuario* getUsuario();
        void setUsuario(Usuario* usuario);
};

#endif
#ifndef FUNCIONARIO
#define FUNCIONARIO

#include <iostream>
#include "Usuario.h"

using namespace std;

class Funcionario: public Usuario{
    private:
        int numeroEmpleado;
    
    public:
        Funcionario();
        Funcionario(string, string, string, int);
        ~Funcionario();
        
        int getNumeroEmpleado();
        void setNumeroEmpleado(int);

        TipoUsuario getTipo() override;
};

#endif
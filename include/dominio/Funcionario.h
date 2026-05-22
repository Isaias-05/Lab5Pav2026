#ifndef FUNCIONARIO
#define FUNCIONARIO


#include <iostream>
#include "Usuario.h"

using namespace std;

class Funcionario: public Usuario{
    private:
        string id;
        string nombre;
        string contrasenia;
        int numeroEmpleado;
    
    public:
        Funcionario();
        Funcionario(string, string, string, int);
        ~Funcionario();
        
        int getNumeroEmpleado();
        void setNumeroEmpleado(int);

};

#endif
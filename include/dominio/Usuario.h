#ifndef USUARIO
#define USUARIO

#include <iostream>
using namespace std;

#include <string>

class Usuario{
    private:
        string id;
        string nombre;
        string contrasenia;
    
    public:
        Usuario();
        Usuario(string, string, string);
        virtual ~Usuario();
        
        string getId();
        void setId(string);

        string getNombre();
        void setNombre(string);

        string getContrasenia();
        void setContrasenia(string);
};

#endif
#ifndef SESION
#define SESION

#include <string>
using namespace std;

class Sesion{
    private:
        string identificador;
        string nombre;
        string contrasenia;
    public:
        Sesion();
        Sesion(string, string, string);
        ~Sesion();

        string getIdentificador();
        void setIdentificador(string);

        string getNombre();
        void setNombre(string);

};

#endif
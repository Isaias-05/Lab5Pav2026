#ifndef DTFUNCIONARIO
#define DTFUNCIONARIO

#include <string>
using namespace std;

class DtFuncionario{
    private:
        string id;
        string contrasenia;
        string nombre;
        int numeroEmpleado;
    public:
        DtFuncionario();
        DtFuncionario(string nombre,string contrasenia, string id, int numeEmpleado);
        ~DtFuncionario();
        string getId();
        string getContrasenia();
        string getNombre();
        int getNumeroEmpleado();
        string toString();
};
#endif
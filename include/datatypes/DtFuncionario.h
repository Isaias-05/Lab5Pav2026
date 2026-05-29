#ifndef DTFUNCIONARIO
#define DTFUNCIONARIO

#include <string>
using namespace std;

class DtFuncionario{
    private:
        string id;
        string nombre;
        int numeroEmpleado;
    public:
        DtFuncionario();
        DtFuncionario(string nombre, string id, int numeroEmpleado);
        ~DtFuncionario();
        string getId();
        string getNombre();
        int getNumeroEmpleado();
};
#endif
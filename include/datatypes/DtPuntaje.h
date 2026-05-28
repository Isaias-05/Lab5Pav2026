#ifndef DT_PUNTAJE
#define DT_PUNTAJE

#include <string>
using namespace std;

class DtPuntaje{
    private:
        string idUsuario;
        string codigoMaterial;
        int valor;

    public:
        DtPuntaje(string, string, int);

        string getIdUsuario();

        string getCodigoMaterial();

        int getValor();
};

#endif
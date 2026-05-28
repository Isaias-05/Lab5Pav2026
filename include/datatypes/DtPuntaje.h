#ifndef DTPUNTAJE
#define DTPUNTAJE

#include <string>
using namespace std;

class DtPuntaje {
    private:
        string idLector;
        string codigoMaterial;
        int valor;
    public:
        DtPuntaje();
        DtPuntaje(string idLector, string codigoMaterial, int valor);
        ~DtPuntaje();

        string getIdLector();

        string getCodigoMaterial();

        int getValor();
};
#endif
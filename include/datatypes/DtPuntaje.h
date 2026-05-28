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
        void setIdLector(string idLector);

        string getCodigoMaterial();
        void setCodigoMaterial(string codigoMaterial);

        int getValor();
        void setValor(int valor);
};
#endif
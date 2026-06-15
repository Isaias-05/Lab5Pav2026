#ifndef DTMATERIAL
#define DTMATERIAL

#include <string>
using namespace std;

class DtMaterial {
    private:
        string codigo;
        string titulo;
        int anioPublicacion;
    public:
        DtMaterial();
        DtMaterial(string codigo, string titulo, int anioPublicacion);
        ~DtMaterial();

        string getCodigo();

        string getTitulo();

        int getAnioPublicacion();

        string toString();
};
#endif
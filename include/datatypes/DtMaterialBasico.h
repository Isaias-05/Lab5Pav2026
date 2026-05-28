#ifndef DTMATERIALBASICO
#define DTMATERIALBASICO

#include <string>
using namespace std;

class DtMaterialBasico {
    private:
        string codigo;
        string titulo;
    public:
        DtMaterialBasico();
        DtMaterialBasico(string codigo, string titulo);
        ~DtMaterialBasico();

        string getCodigo();
        void setCodigo(string codigo);

        string getTitulo();
        void setTitulo(string titulo);
};
#endif
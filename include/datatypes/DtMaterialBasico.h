#ifndef DT_MATERIAL_BASICO
#define DT_MATERIAL_BASICO

#include <string>
using namespace std;

class DtMaterialBasico{
    private:
        string codigo;
        string titulo;

    public:
        DtMaterialBasico(string, string);

        string getCodigo();

        string getTitulo();
};
#endif
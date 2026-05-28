#ifndef DT_MATERIAL
#define DT_MATERIAL

#include <string>
using namespace std;

class DtMaterial{
    private:
        string codigo;
        string titulo;
        int anioPublicacion;

    public:
        DtMaterial(string, string, int);


        string getCodigo();

        string getTitulo();

        int getAnioPublicacion();
};
#endif
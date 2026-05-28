#ifndef DT_FECHA
#define DT_FECHA

#include <string>
using namespace std;

class DtFecha{
    private:
        int dia;
        int mes;
        int anio;

    public:
        DtFecha(int, int, int);

        int getDia();
        int getMes();
        int getAnio();
};

#endif
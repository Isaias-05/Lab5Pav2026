#ifndef DTFECHA
#define DTFECHA
#include <string>
using namespace std;

class DtFecha{
    private:
        int dia;
        int mes;
        int anio;
        int hora;
        int minuto;
	public:
		DtFecha();
		DtFecha(int, int, int, int, int);
		~DtFecha();
        int getDia() const;
        int getMes() const;
        int getAnio() const;
        int getHora() const;
        int getMinuto() const;

        string toString() const;
};
#endif
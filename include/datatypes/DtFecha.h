#ifndef DTFECHA
#define DTFECHA
#include <string>
using namespace std;

class DtFecha{
    private:
        int dia;
        int mes;
        int anio;
	public:
		DtFecha();
		DtFecha(int, int, int);
		~DtFecha();
        int getDia() const;
        int getMes() const;
        int getAnio() const;

        string toString() const;
};
#endif
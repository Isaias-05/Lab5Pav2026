#ifndef DTLECTOR
#define DTLECTOR

#include "DtFecha.h"

#include <string>
using namespace std;

class DtLector{
    private:
        string id;
        string nombre;
        string contrasenia;
        DtFecha fechaRegistro;
	public:
		DtLector();
		DtLector(string id, string nombre, string contrasenia, DtFecha fechaRegistro);
		~DtLector();

        string getId();
        string getNombre();
        string getContrasenia();
        DtFecha getFechaRegistro();

        string toString();
};
#endif
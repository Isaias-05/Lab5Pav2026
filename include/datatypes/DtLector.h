#ifndef DTLECTOR
#define DTLECTOR

#include "DtMaterialPrestado.h"
#include "DtFecha.h"
#include <string>
#include <vector>
using namespace std;

class DtLector{
    private:
        string id; 
        string contrasenia;
        string nombre;
        DtFecha fechReg;
	public:
		DtLector();
		DtLector(string id, string contrasenia, string nombre, DtFecha fechReg);
		~DtLector();

        string getId();
        string getNombre();
        string getContrasenia();
        DtFecha getFechaRegistro();

        
};
#endif
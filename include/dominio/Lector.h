#ifndef LECTOR
#define LECTOR

#include <iostream>
#include <vector>	
#include "Usuario.h"
#include "Prestamo.h"

#include "DtFecha.h"
#include "DtLector.h"
#include "DtMaterialPrestado.h"

#include <string>
#include <iostream>
#include <set>
using namespace std;

class Lector: public Usuario{
	private:
        DtFecha fechaRegistro;
		vector<Prestamo*> prestamos;
	public:
		Lector();
		Lector(string, string, string, DtFecha);
		~Lector();
        
        DtFecha getFechaRegistro();
        void setFechaRegistro(DtFecha); 

        void agregarPrestamo(Prestamo*);

        DtLector getDtLector();
        
};
#endif
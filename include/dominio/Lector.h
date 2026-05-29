#ifndef LECTOR
#define LECTOR
#define MAX_PRESTAMOS 100

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
		Prestamo * prestamos[MAX_PRESTAMOS];
		int topePrestamos;
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
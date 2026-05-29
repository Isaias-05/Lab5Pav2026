#ifndef LECTOR
#define LECTOR
#define MAX_PRESTAMOS 100

#include <iostream>
#include <set>
#include "Usuario.h"
#include "Prestamo.h"

#include "DtFecha.h"
#include "Prestamo.h"
#include "DtMaterialPrestado.h"
#include "DtLector.h"
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
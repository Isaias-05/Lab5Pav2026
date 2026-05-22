#ifndef LECTOR
#define LECTOR

#include <set>
#include <iostream>

#include "Usuario.h"
#include "Prestamo.h"

#include "DtFecha.h"
#include "Prestamo.h"
#include "DtMaterialPrestado.h"
#include "DtLector.h"
using namespace std;

class Lector: public Usuario{
	private:
		string id;
        string nombre;
        string contrasenia;
        DtFecha fechaRegistro;
		set<Prestamo> prestamos;
		
	
	public:
		Lector();
		Lector(string, string,  DtFecha, DtFecha);
		~Lector();
        
        DtFecha getFechaRegistro();
        void setFechaRegistro(DtFecha); 

        void agregarPrestamo(Prestamo);

        DtLector getDtLector();
        
};
#endif
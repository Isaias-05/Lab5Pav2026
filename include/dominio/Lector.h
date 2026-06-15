#ifndef LECTOR
#define LECTOR

#include <iostream>
#include <vector>
#include <string>

#include "Usuario.h"
#include "Prestamo.h"
#include "DtFecha.h"
#include "DtLector.h"
#include "DtPrestamoLector.h"

using namespace std;

class Lector: public Usuario{
	private:
        DtFecha fechaRegistro;
		vector<Prestamo*> prestamos;
	public:
		Lector();
		Lector(string id, string nombre, string contrasenia, DtFecha fechaRegistro);
		~Lector();
        
        DtFecha getFechaRegistro();
        void setFechaRegistro(DtFecha); 

        void agregarPrestamo(Prestamo*);

        DtLector getDtLector();
        
		DtPrestamoLector getDtPrestamoLector();

		TipoUsuario getTipo() override;
};
#endif
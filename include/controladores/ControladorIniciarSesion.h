#ifndef CONTROLADORINICIARSESION
#define CONTROLADORINICIARSESION

#include "Sesion.h"
#include "IControladorIniciarSesion.h"

#include <string>
using namespace std;

class ControladorIniciarSesion : public IControladorIniciarSesion {
	public:
		ControladorIniciarSesion();
		
		~ControladorIniciarSesion();

		bool iniciarSesion(string, string) override;
};

#endif // CONTROLADORINICIARSESION


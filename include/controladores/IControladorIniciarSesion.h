#ifndef ICONTROLADORINICIARSESION_H
#define ICONTROLADORINICIARSESION_H

#include <string>
using std::string;

class IControladorIniciarSesion {
public:
	virtual ~IControladorIniciarSesion() {}
	virtual bool iniciarSesion(const string &usuario, const string &contrasena) = 0;
	virtual void cerrarSesion() = 0;
};

#endif // ICONTROLADORINICIARSESION_H

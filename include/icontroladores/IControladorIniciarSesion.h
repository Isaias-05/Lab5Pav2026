#ifndef ICONTROLADORINICIARSESION_H
#define ICONTROLADORINICIARSESION_H

#include <string>
using std::string;

class IControladorIniciarSesion {
public:
	virtual ~IControladorIniciarSesion() {}
	virtual bool iniciarSesion(string,string) = 0;
};

#endif // ICONTROLADORINICIARSESION_H

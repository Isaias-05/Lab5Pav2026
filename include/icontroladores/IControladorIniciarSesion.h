#ifndef ICONTROLADORINICIARSESION
#define ICONTROLADORINICIARSESION

#include <string>
using std::string;

class IControladorIniciarSesion {
public:
	virtual ~IControladorIniciarSesion() {}
	virtual bool iniciarSesion(string,string) = 0;
};

#endif // ICONTROLADORINICIARSESION

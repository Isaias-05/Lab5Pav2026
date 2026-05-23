#ifndef ICONTROLADORPUNTUARMATERIAL_H
#define ICONTROLADORPUNTUARMATERIAL_H

#include <string>
using std::string;

class IControladorPuntuarMaterial {
public:
	virtual ~IControladorPuntuarMaterial() {}
	virtual bool puntuarMaterial(const string &codigo, int puntaje) = 0;
};

#endif // ICONTROLADORPUNTUARMATERIAL_H


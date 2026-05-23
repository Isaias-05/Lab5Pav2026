#ifndef ICONTROLADORVERINFORMACIONMATERIAL_H
#define ICONTROLADORVERINFORMACIONMATERIAL_H

#include <string>
using std::string;

class IControladorVerInformacionMaterial {
public:
	virtual ~IControladorVerInformacionMaterial() {}
	// Devuelve información básica; la implementación puede cambiar el tipo de retorno
	virtual void verInformacion(const string &codigo) = 0;
};

#endif // ICONTROLADORVERINFORMACIONMATERIAL_H


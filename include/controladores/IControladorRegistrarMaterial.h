#ifndef ICONTROLADORREGISTRARMATERIAL_H
#define ICONTROLADORREGISTRARMATERIAL_H

#include <string>
using std::string;

class IControladorRegistrarMaterial {
public:
	virtual ~IControladorRegistrarMaterial() {}
	virtual bool registrarMaterial(const string &codigo, const string &titulo) = 0;
};

#endif // ICONTROLADORREGISTRARMATERIAL_H


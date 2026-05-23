#ifndef ICONTROLADORREGISTRARLECTOR_H
#define ICONTROLADORREGISTRARLECTOR_H

#include <string>
using std::string;

class IControladorRegistrarLector {
public:
	virtual ~IControladorRegistrarLector() {}
	virtual bool registrarLector(const string &nombre, const string &email) = 0;
};

#endif // ICONTROLADORREGISTRARLECTOR_H


#ifndef ICONTROLADORREGISTRARLECTOR
#define ICONTROLADORREGISTRARLECTOR

#include "DtLector.h"
#include "DtFecha.h"
#include <string>
using std::string;

class IControladorRegistrarLector {
public:
	virtual ~IControladorRegistrarLector() {}

	virtual DtLector registrarLector(string, string, string, DtFecha) = 0;
	virtual void altaLector() = 0;
};

#endif // ICONTROLADORREGISTRARLECTOR


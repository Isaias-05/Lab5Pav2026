#ifndef ICONTROLADORPRESTAMOLECTOR
#define ICONTROLADORPRESTAMOLECTOR

#include "DtPrestamoLector.h"
#include <string>
using std::string;

class IControladorPrestamoLector {
public:
	virtual ~IControladorPrestamoLector() {}
	
	virtual DtPrestamoLector obtenerLector(int) = 0; 
};

#endif // ICONTROLADORPRESTAMOLECTOR


#ifndef ICONTROLADORPRESTAMOLECTOR_H
#define ICONTROLADORPRESTAMOLECTOR_H

#include <string>
using std::string;

class IControladorPrestamoLector {
public:
	virtual ~IControladorPrestamoLector() {}
	virtual bool registrarPrestamo(const string &lectorEmail, const string &codigoMaterial) = 0;
	virtual bool devolverMaterial(const string &codigoMaterial) = 0;
};

#endif // ICONTROLADORPRESTAMOLECTOR_H


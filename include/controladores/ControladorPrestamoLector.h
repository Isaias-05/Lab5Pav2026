#ifndef CONTROLADORPRESTAMOLECTOR_H
#define CONTROLADORPRESTAMOLECTOR_H

#include "IControladorPrestamoLector.h"
#include <string>
using std::string;

class ControladorPrestamoLector : public IControladorPrestamoLector {
public:
	ControladorPrestamoLector();
	~ControladorPrestamoLector();

	bool registrarPrestamo(const string &lectorEmail, const string &codigoMaterial) override;
	bool devolverMaterial(const string &codigoMaterial) override;
};

#endif // CONTROLADORPRESTAMOLECTOR_H


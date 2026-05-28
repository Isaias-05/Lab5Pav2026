#ifndef CONTROLADORPRESTAMOLECTOR_H
#define CONTROLADORPRESTAMOLECTOR_H

#include "IControladorPrestamoLector.h"
#include "DtPrestamoLector.h"
#include <string>
using std::string;

class ControladorPrestamoLector : public IControladorPrestamoLector {
public:
	ControladorPrestamoLector();
	~ControladorPrestamoLector();

	DtPrestamoLector obtenerLector(int) override;

};

#endif // CONTROLADORPRESTAMOLECTOR_H


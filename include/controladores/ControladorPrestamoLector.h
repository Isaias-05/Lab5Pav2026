#ifndef CONTROLADORPRESTAMOLECTOR
#define CONTROLADORPRESTAMOLECTOR

#include "Lector.h"
#include "ManejadorUsuario.h"
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

#endif // CONTROLADORPRESTAMOLECTOR


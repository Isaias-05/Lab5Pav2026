#ifndef CONTROLADORCONSULTARPRESTAMOSDELECTOR
#define CONTROLADORCONSULTARPRESTAMOSDELECTOR

#include "Lector.h"
#include "ManejadorUsuario.h"
#include "IControladorConsultarPrestamosDeLector.h"
#include "DtPrestamoLector.h"
#include <string>
using std::string;

class ControladorConsultarPrestamosDeLector : public IControladorConsultarPrestamosDeLector {
public:
	ControladorConsultarPrestamosDeLector();
	~ControladorConsultarPrestamosDeLector();

	DtPrestamoLector obtenerLector(string) override;

};

#endif // CONTROLADORCONSULTARPRESTAMOSDELECTOR


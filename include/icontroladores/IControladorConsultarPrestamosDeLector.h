#ifndef ICONTROLADORCONSULTARPRESTAMOSDELECTOR
#define ICONTROLADORCONSULTARPRESTAMOSDELECTOR

#include "DtPrestamoLector.h"
#include <string>
using std::string;

class IControladorConsultarPrestamosDeLector {
public:
	virtual ~IControladorConsultarPrestamosDeLector() {}
	
	virtual DtPrestamoLector obtenerLector(string) = 0; 
};

#endif // ICONTROLADORCONSULTARPRESTAMOSDELECTOR


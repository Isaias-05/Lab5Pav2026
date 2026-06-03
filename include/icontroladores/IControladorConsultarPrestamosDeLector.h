#ifndef ICONTROLADORCONSULTARPRESTAMOSDELECTOR
#define ICONTROLADORCONSULTARPRESTAMOSDELECTOR

#include "DtPrestamoLector.h"
#include <string>
using std::string;

class IControladorConsultarPrestamosDeLector {
public:
	virtual ~IControladorConsultarPrestamosDeLector() {}
	
	virtual DtPrestamoLector obtenerLector(int) = 0; 
};

#endif // ICONTROLADORCONSULTARPRESTAMOSDELECTOR


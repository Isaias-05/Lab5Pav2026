#ifndef ICONTROLADORREGISTRARFUNCIONARIO
#define ICONTROLADORREGISTRARFUNCIONARIO

#include "DtFuncionario.h"
#include <string>
using std::string;

class IControladorRegistrarFuncionario {
public:
	virtual ~IControladorRegistrarFuncionario() {}
	virtual DtFuncionario registrarFuncionario(string, string, string, int) = 0;
	virtual void altaFuncionario() = 0;
};

#endif // ICONTROLADORREGISTRARFUNCIONARIO

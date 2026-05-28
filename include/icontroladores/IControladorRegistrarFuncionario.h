#ifndef ICONTROLADORREGISTRARFUNCIONARIO_H
#define ICONTROLADORREGISTRARFUNCIONARIO_H

#include "DtLector.h"
#include <string>
using std::string;

class IControladorRegistrarFuncionario {
public:
	virtual ~IControladorRegistrarFuncionario() {}
	virtual DtLector registrarFuncionario(string, string, int) = 0;
};

#endif // ICONTROLADORREGISTRARFUNCIONARIO_H

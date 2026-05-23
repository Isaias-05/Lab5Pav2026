#ifndef ICONTROLADORREGISTRARFUNCIONARIO_H
#define ICONTROLADORREGISTRARFUNCIONARIO_H

#include <string>
using std::string;

class IControladorRegistrarFuncionario {
public:
	virtual ~IControladorRegistrarFuncionario() {}
	virtual bool registrarFuncionario(const string &nombre, const string &email) = 0;
};

#endif // ICONTROLADORREGISTRARFUNCIONARIO_H


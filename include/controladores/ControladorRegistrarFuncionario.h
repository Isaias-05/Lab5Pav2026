#ifndef CONTROLADORREGISTRARFUNCIONARIO_H
#define CONTROLADORREGISTRARFUNCIONARIO_H

#include "IControladorRegistrarFuncionario.h"
#include <string>
using std::string;

class ControladorRegistrarFuncionario : public IControladorRegistrarFuncionario {
public:
	ControladorRegistrarFuncionario();
	~ControladorRegistrarFuncionario();

	bool registrarFuncionario(const string &nombre, const string &email) override;
};

#endif // CONTROLADORREGISTRARFUNCIONARIO_H


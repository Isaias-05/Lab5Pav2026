#ifndef CONTROLADORREGISTRARFUNCIONARIO_H
#define CONTROLADORREGISTRARFUNCIONARIO_H

#include "IControladorRegistrarFuncionario.h"
#include "DtLector.h"
#include <string>
using std::string;

class ControladorRegistrarFuncionario : public IControladorRegistrarFuncionario {
public:
	ControladorRegistrarFuncionario();
	~ControladorRegistrarFuncionario();

	DtLector registrarFuncionario(string, string, int) override;
};

#endif // CONTROLADORREGISTRARFUNCIONARIO_H


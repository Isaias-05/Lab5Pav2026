#ifndef CONTROLADORREGISTRARFUNCIONARIO
#define CONTROLADORREGISTRARFUNCIONARIO

#include "Funcionario.h"
#include "ManejadorUsuario.h"
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

#endif // CONTROLADORREGISTRARFUNCIONARIO


#ifndef CONTROLADORREGISTRARFUNCIONARIO
#define CONTROLADORREGISTRARFUNCIONARIO

#include "Funcionario.h"
#include "ManejadorUsuario.h"
#include "IControladorRegistrarFuncionario.h"
#include "DtFuncionario.h"
#include <string>
using std::string;

class ControladorRegistrarFuncionario : public IControladorRegistrarFuncionario {
public:
	ControladorRegistrarFuncionario();
	~ControladorRegistrarFuncionario();

	DtFuncionario* registrarFuncionario(string idUsuario, string nombre, string contrasenia, int numEmpleado) override;
	void altaFuncionario(DtFuncionario* dtFuncionario) override;
};

#endif // CONTROLADORREGISTRARFUNCIONARIO


#ifndef CONTROLADORREGISTRARFUNCIONARIO
#define CONTROLADORREGISTRARFUNCIONARIO

#include "Funcionario.h"
#include "IControladorRegistrarFuncionario.h"
#include "DtFuncionario.h"
#include <string>
using std::string;

class ControladorRegistrarFuncionario : public IControladorRegistrarFuncionario {
private:
	string id;
	string nombre;
	string contrasenia;
	int numeroEmpleado;
public:
	ControladorRegistrarFuncionario();
	~ControladorRegistrarFuncionario();

	DtFuncionario registrarFuncionario(string idUsuario, string nombre, string contrasenia, int numeroEmpleado) override;
	void altaFuncionario() override;
};

#endif // CONTROLADORREGISTRARFUNCIONARIO


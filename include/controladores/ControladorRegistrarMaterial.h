#ifndef CONTROLADORREGISTRARMATERIAL
#define CONTROLADORREGISTRARMATERIAL

#include "IControladorRegistrarMaterial.h"
#include "DtLibro.h"
#include "DtRevista.h"
#include "TipoMaterial.h"
#include <string>
using std::string;

class ControladorRegistrarMaterial : public IControladorRegistrarMaterial {
private:
	string codigo;
	string titulo;
	int anioPublicacion;
	TipoMaterial tipo;

	//Libro
	string autor;
	int cantidadPaginas;

	//Revista
	int numeroEdicion;
	bool publicacionMensual;
public:
	ControladorRegistrarMaterial();
	~ControladorRegistrarMaterial();

	void registrarMaterial(string, string, int, TipoMaterial) override;
	DtLibro ingresarDatosLibro(string, int) override;
	DtRevista ingresarDatosRevista(int, bool) override;
	void confirmar() override;
	
};

#endif // CONTROLADORREGISTRARMATERIAL


#ifndef CONTROLADORELIMINARLECTOR
#define CONTROLADORELIMINARLECTOR

#include "Lector.h"
#include "ManejadorUsuario.h"
#include "IControladorEliminarLector.h"
#include "DtLector.h"

class ControladorEliminarLector : public IControladorEliminarLector {
public:
	ControladorEliminarLector();
	~ControladorEliminarLector();

	DtLector consultarLector(string idUsuario) override;
	void confirmar(string idUsuario) override; 
};

#endif // CONTROLADORELIMINARLECTOR


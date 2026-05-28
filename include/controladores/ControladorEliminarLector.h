#ifndef CONTROLADORELIMINARLECTOR_H
#define CONTROLADORELIMINARLECTOR_H

#include "Lector.h"
#include "ManejadorUsuario.h"
#include "IControladorEliminarLector.h"
#include "DtLector.h"

class ControladorEliminarLector : public IControladorEliminarLector {
public:
	ControladorEliminarLector();
	~ControladorEliminarLector();

	DtLector consultarLector(string) override;
	void confirmar() override; 
};

#endif // CONTROLADORELIMINARLECTOR_H


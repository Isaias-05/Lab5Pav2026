#ifndef CONTROLDOR_ELIMINAR_LECTOR_H
#define CONTROLDOR_ELIMINAR_LECTOR_H

#include "IControladorEliminarLector.h"

class ControldorEliminarLector : public IControladorEliminarLector {
public:
	ControldorEliminarLector();
	~ControldorEliminarLector();

	bool eliminarLector(const std::string &email) override;
};

#endif // CONTROLDOR_ELIMINAR_LECTOR_H


#ifndef CONTROLADORELIMINARMATERIAL_H
#define CONTROLADORELIMINARMATERIAL_H

#include "IControladorEliminarMaterial.h"
#include <string>
using std::string;

class ControladorEliminarMaterial : public IControladorEliminarMaterial {
public:
	ControladorEliminarMaterial();
	~ControladorEliminarMaterial();

	bool eliminarMaterial(const string &codigo) override;
};

#endif // CONTROLADORELIMINARMATERIAL_H


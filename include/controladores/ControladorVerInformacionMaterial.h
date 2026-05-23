#ifndef CONTROLADORVERINFORMACIONMATERIAL_H
#define CONTROLADORVERINFORMACIONMATERIAL_H

#include "IControladorVerInformacionMaterial.h"
#include <string>
using std::string;

class ControladorVerInformacionMaterial : public IControladorVerInformacionMaterial {
public:
	ControladorVerInformacionMaterial();
	~ControladorVerInformacionMaterial();

	void verInformacion(const string &codigo) override;
};

#endif // CONTROLADORVERINFORMACIONMATERIAL_H


#ifndef ICONTROLADORELIMINARMATERIAL_H
#define ICONTROLADORELIMINARMATERIAL_H

#include <string>
using std::string;

class IControladorEliminarMaterial {
public:
	virtual ~IControladorEliminarMaterial() {}
	virtual bool eliminarMaterial(const string &codigo) = 0;
};

#endif // ICONTROLADORELIMINARMATERIAL_H


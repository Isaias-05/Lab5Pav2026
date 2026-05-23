#ifndef ICONTROLADORELIMINARLECTOR_H
#define ICONTROLADORELIMINARLECTOR_H

#include <string>
using std::string;

class IControladorEliminarLector {
public:
	virtual ~IControladorEliminarLector() {}
	virtual bool eliminarLector(const string &email) = 0;
};

#endif // ICONTROLADORELIMINARLECTOR_H


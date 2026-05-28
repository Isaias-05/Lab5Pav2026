#ifndef ICONTROLADORELIMINARLECTOR_H
#define ICONTROLADORELIMINARLECTOR_H

#include <string>
using std::string;

class IControladorEliminarLector {
public:
	~IControladorEliminarLector();
	virtual consultarLector(string) = 0;
	virtual confirmar() = 0; 
};

#endif // ICONTROLADORELIMINARLECTOR_H


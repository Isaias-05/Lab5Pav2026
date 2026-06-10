#ifndef ICONTROLADORELIMINARLECTOR
#define ICONTROLADORELIMINARLECTOR

#include <string>
using std::string;

class IControladorEliminarLector {
public:
	virtual ~IControladorEliminarLector() {}
	virtual DtLector consultarLector(string) = 0;
	virtual void confirmar(string) = 0; 
};

#endif // ICONTROLADORELIMINARLECTOR


#ifndef ICONTROLADORELIMINARLECTOR
#define ICONTROLADORELIMINARLECTOR

#include <string>
using std::string;

class IControladorEliminarLector {
public:
	~IControladorEliminarLector();
	virtual DtLector consultarLector(string) = 0;
	virtual void confirmar() = 0; 
};

#endif // ICONTROLADORELIMINARLECTOR


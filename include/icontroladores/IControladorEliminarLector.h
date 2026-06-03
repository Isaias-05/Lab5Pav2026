#ifndef ICONTROLADORELIMINARLECTOR
#define ICONTROLADORELIMINARLECTOR

#include <string>
using std::string;

class IControladorEliminarLector {
public:
	~IControladorEliminarLector();
	virtual consultarLector(string) = 0;
	virtual confirmar() = 0; 
};

#endif // ICONTROLADORELIMINARLECTOR


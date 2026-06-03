#ifndef ICONTROLADORCERRARSESION
#define ICONTROLADORCERRARSESION

class IControladorCerrarSesion {
public:
	virtual ~IControladorCerrarSesion() {}
	virtual void cerrarSesion() = 0;
};

#endif // ICONTROLADORCERRARSESION


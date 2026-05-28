#ifndef ICONTROLADORCERRARSESION_H
#define ICONTROLADORCERRARSESION_H

class IControladorCerrarSesion {
public:
	virtual ~IControladorCerrarSesion() {}
	virtual void cerrarSesion() = 0;
};

#endif // ICONTROLADORCERRARSESION_H


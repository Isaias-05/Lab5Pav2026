#ifndef PUNTAJE
#define PUNTAJE

#include "Lector.h"

class Puntaje{
    private:
        Lector* lector;
        int valor;
    
    public:
        Puntaje();
        Puntaje(Lector*, int);
        ~Puntaje();

        Lector* getLector();
        void setLector(Lector*);

        int getValor();
        void setValor(int);
};


#endif
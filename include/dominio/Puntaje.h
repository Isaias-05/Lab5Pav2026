#ifndef PUNTAJE
#define PUNTAJE

#include "Lector.h"

class Puntaje{
    private:
        int valor;
        Lector* lector;
    
    public:
        Puntaje();
        Puntaje(int, Lector*);
        ~Puntaje();
        
        int getValor();
        void setValor(int);

        Lector* getLector();
        void setLector(Lector*);
    };


#endif
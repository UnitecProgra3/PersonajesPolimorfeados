#ifndef CURADOR_H
#define CURADOR_H

#include "Personaje.h"

class Curador : public Personaje
{
    public:
        int puntos_de_curacion;
        Curador(int hp, int puntos_de_ataque,int puntos_de_curacion);
        virtual ~Curador();

        void activarPoder();
    protected:
    private:
};

#endif // CURADOR_H

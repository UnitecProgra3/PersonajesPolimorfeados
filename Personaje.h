#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>

using namespace std;

class Personaje
{
    public:
        int hp;
        int puntos_de_ataque;
        string tipo;

        Personaje(){}
        Personaje(int hp, int puntos_de_ataque, string tipo);
        virtual ~Personaje();

        void imprimir();
        virtual void recibirAtaque(int ataque);
        virtual void activarPoder()=0;
        virtual void atacar(Personaje*objetivo);

    protected:
    private:
};

#endif // PERSONAJE_H

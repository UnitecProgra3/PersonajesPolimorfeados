#ifndef MAGOOSCURO_H
#define MAGOOSCURO_H

#include "Personaje.h"

class MagoOscuro : public Personaje
{
    public:
        bool super_rayo_activado;

        MagoOscuro(int hp, int puntos_de_ataque);
        virtual ~MagoOscuro();

        void activarPoder();
        void atacar(Personaje*personaje);
    protected:
    private:
};

#endif // MAGOOSCURO_H

#include "MagoOscuro.h"

MagoOscuro::MagoOscuro(int hp,int puntos_de_ataque)
{
    this->hp=hp;
    this->puntos_de_ataque=puntos_de_ataque;
    this->tipo="MagoOscuro";
    this->super_rayo_activado=false;
}

MagoOscuro::~MagoOscuro()
{
    //dtor
}

void MagoOscuro::activarPoder()
{
    this->super_rayo_activado=true;
}

void MagoOscuro::atacar(Personaje* objetivo)
{
    if(super_rayo_activado)
        objetivo->recibirAtaque(this->puntos_de_ataque*2);
    else
        objetivo->recibirAtaque(this->puntos_de_ataque);

    super_rayo_activado=false;
}

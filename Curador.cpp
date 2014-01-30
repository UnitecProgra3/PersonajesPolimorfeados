#include "Curador.h"

Curador::Curador(int hp, int puntos_de_ataque,int puntos_de_curacion)
{
    this->tipo="Curador";
    this->hp=hp;
    this->puntos_de_ataque=puntos_de_ataque;
    this->puntos_de_curacion=puntos_de_curacion;
}

Curador::~Curador()
{
    //dtor
}

void Curador::activarPoder()
{
    this->hp+=puntos_de_curacion;
}







#include "Personaje.h"

Personaje::Personaje(int hp, int puntos_de_ataque, string tipo)
{
    this->hp=hp;
    this->puntos_de_ataque=puntos_de_ataque;
    this->tipo=tipo;
}

Personaje::~Personaje()
{
    //dtor
}


void Personaje::imprimir()
{
    cout<<"Tipo: "<<tipo<<endl;
    cout<<"HP: "<<hp<<endl;
    cout<<"Ataque: "<<puntos_de_ataque<<endl;
}

void Personaje::recibirAtaque(int ataque)
{
    this->hp-=ataque;
}

void Personaje::atacar(Personaje*objetivo)
{
    objetivo->recibirAtaque(puntos_de_ataque);
}












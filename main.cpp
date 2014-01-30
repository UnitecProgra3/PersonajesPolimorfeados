#include <iostream>
#include "Personaje.h"
#include "Curador.h"
#include "Tanque.h"
#include "MagoOscuro.h"

using namespace std;

int main()
{
    Curador curador(100,10,20);
    Tanque tanque(200,5);
    MagoOscuro mago(80,20);

    tanque.imprimir();

    mago.atacar(&tanque);

    tanque.imprimir();

    mago.activarPoder();
    mago.atacar(&tanque);

    tanque.imprimir();

    mago.activarPoder();
    tanque.activarPoder();
    mago.atacar(&tanque);

    tanque.imprimir();

    return 0;
}

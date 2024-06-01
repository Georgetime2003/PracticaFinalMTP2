#include "Joc.h"
#include <iostream>

Joc::Joc() : piles(4) {}

void Joc::iniciar() {
    baralla.barrejar();
    tauler.inicialitzar(baralla);
}

void Joc::jugar() {
    // Mostra l'estat inicial del joc.
    tauler.mostrar();
    // Aquí afegir la lògica de joc (lectura d'ordres de l'usuari, moviment de cartes, etc.)
    cout << "Entra la llavor" << endl;
}

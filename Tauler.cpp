#include "Tauler.h"
#include "Baralla.h"
#include <iostream>

Tauler::Tauler() : columnes(7) {}

void Tauler::inicialitzar(Baralla& baralla) {
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j <= i; ++j) {
            columnes[i].apilar(baralla.repartir());
        }
    }
}

void Tauler::mostrar() const {
    for (size_t i = 0; i < columnes.size(); ++i) {
        std::cout << "Columna " << i + 1 << ": ";
        if (columnes[i].buida()) {
            std::cout << "Buida";
        } else {
            // Només mostra la carta del cim per simplicitat
            std::cout << columnes[i].cim().toString();
        }
        std::cout << std::endl;
    }
}

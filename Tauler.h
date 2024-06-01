#ifndef TAULER_H
#define TAULER_H

#include <vector>
#include "Carta.h"
#include "Baralla.h"
#include "PilaDeCartes.h"

class Tauler {
public:
    Tauler();
    void inicialitzar(Baralla& baralla);
    void mostrar() const;
    // Afegiu altres mètodes segons sigui necessari.

private:
    std::vector<PilaDeCartes> columnes;
};

#endif // TAULER_H

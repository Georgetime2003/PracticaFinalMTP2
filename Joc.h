#ifndef JOC_H
#define JOC_H

#include "Baralla.h"
#include "Tauler.h"
#include "PilaDeCartes.h"

class Joc {
public:
    Joc();
    void iniciar();
    void jugar();
    // Afegiu altres mètodes segons sigui necessari.

private:
    Baralla baralla;
    Tauler tauler;
    PilaDeCartes descartades;
    std::vector<PilaDeCartes> piles;
};

#endif // JOC_H

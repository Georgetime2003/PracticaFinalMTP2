#include "PilaDeCartes.h"

void PilaDeCartes::apilar(Carta carta) {
    pila.push(carta);
}

Carta PilaDeCartes::desapilar() {
    Carta cimCarta = pila.top();
    pila.pop();
    return cimCarta;
}

bool PilaDeCartes::buida() const {
    return pila.empty();
}

Carta PilaDeCartes::cim() const {
    return pila.top();
}

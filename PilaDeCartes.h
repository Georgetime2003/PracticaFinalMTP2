#ifndef PILADECARTES_H
#define PILADECARTES_H

#include <stack>
#include "Carta.h"

class PilaDeCartes {
public:
    void apilar(Carta carta);
    Carta desapilar();
    bool buida() const;
    Carta cim() const;

private:
    std::stack<Carta> pila;
};

#endif // PILADECARTES_H

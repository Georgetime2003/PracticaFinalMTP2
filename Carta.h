#ifndef CARTA_H
#define CARTA_H

#include <iostream>
#include <string>

class Carta {
public:
    enum Pal { PIQUES, CORS, DIAMANTS, TREVOLS };

    Carta(Pal pal, int valor);
    Pal getPal() const;
    int getValor() const;
    std::string toString() const;

private:
    Pal pal;
    int valor;
};

#endif // CARTA_H

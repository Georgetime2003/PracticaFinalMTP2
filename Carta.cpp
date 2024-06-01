#include "Carta.h"

Carta::Carta(Pal pal, int valor) : pal(pal), valor(valor) {}

Carta::Pal Carta::getPal() const {
  return pal;
}

int Carta::getValor() const {
  return valor;
}

std::string Carta::toString() const {
  const char* pals[] = { "Piques", "Cors", "Diamants", "Trèvols" };
  return pals[pal] + std::to_string(valor);
}

#include "Baralla.h"
#include <algorithm>
#include <random>

Baralla::Baralla() {
  inicialitzar();
  barrejar();
}

void Baralla::inicialitzar() {
  cartes.clear();
  for (int pal = 0; pal < 4; ++pal) {
    for (int valor = 1; valor <= 13; ++valor) {
      cartes.push_back(Carta(static_cast<Carta::Pal>(pal), valor));
    }
  }
  cartaActual = 0;
}

void Baralla::barrejar() {
  std::random_device rd;
  std::mt19937 g(rd());
  std::shuffle(cartes.begin(), cartes.end(), g);
}

Carta Baralla::repartir() {
  return cartes[cartaActual++];
}

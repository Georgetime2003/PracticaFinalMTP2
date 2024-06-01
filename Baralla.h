#ifndef BARALLA_H
#define BARALLA_H

#include <vector>
#include "Carta.h"

class Baralla {
public:
  Baralla();
  void barrejar();
  Carta repartir();

private:
  std::vector<Carta> cartes;
  int cartaActual;
  void inicialitzar();
};

#endif // BARALLA_H

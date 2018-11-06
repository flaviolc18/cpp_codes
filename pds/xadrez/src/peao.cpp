#include "peao.h"

Peao::Peao(int x, int y) : Peca("♟", x, y) {}

bool Peao::pode_mover(int x, int y){
  return x == x && y == 1 && this->valida_movimento(x, y);
}
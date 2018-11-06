#include "peao.h"

Peao::Peao(int x, int y, Tabuleiro* t) : Peca("♟", x, y, t) {}

bool Peao::pode_mover(int x, int y){
  return x == x && y == 1 && this->valida_movimento(x, y);
}
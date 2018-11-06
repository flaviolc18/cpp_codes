#include "bispo.h"

Bispo::Bispo(int x, int y, Tabuleiro* t) : Peca("♝", x, y, t){}

bool Bispo::pode_mover(int x, int y){

  return std::abs(this->_p._x - x) == std::abs(this->_p._y - y) && this->valida_movimento(x, y);
}


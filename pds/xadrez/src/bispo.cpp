#include "bispo.h"

Bispo::Bispo(int x, int y) : Peca("♝", x,y){}

bool Bispo::pode_mover(int x, int y){

  return std::abs(this->_p._x - x) == std::abs(this->_p._y - y) && this->valida_movimento(x, y);
}


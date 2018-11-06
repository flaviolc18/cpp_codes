#include "rainha.h"

Rainha::Rainha(int x, int y) : Peca("♛", x, y) {}

bool Rainha::pode_mover(int x, int y){
  return ((std::abs(this->_p._x - x) == std::abs(this->_p._y - y) || (x == 0 || y == 0))) && this->esta_no_tabuleiro(x,y);
}
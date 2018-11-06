#include "rainha.h"

Rainha::Rainha(int x, int y, Tabuleiro* t) : Peca("♛", x, y, t) {}

bool Rainha::pode_mover(int x, int y){
  return ((std::abs(this->_p._x - x) == std::abs(this->_p._y - y) || (x == 0 || y == 0))) && this->valida_movimento(x,y);
}
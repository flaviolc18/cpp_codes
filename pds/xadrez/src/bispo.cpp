#include "bispo.h"
#include "tabuleiro.h"

Bispo::Bispo(int x, int y, std::string &cor) : Peca("♝", cor, x, y) {}
Bispo::~Bispo() {}
bool Bispo::pode_mover(int x, int y, Tabuleiro *t)
{
  return std::abs(this->_p._x - x) == std::abs(this->_p._y - y) && this->valida_movimento(x, y, t);
}

bool Bispo::tem_peca_na_frente(int x, int y, Tabuleiro *t)
{
  int j = this->_p._x, k = this->_p._y;
  int acrescimo_j = x > this->_p._x ? 1 : -1;
  int acrescimo_k = y > this->_p._y ? 1 : -1;

  while (j != x && k != y)
  {
    if (t->tem_peca(j, k))
    {
      return true;
    }
    j += acrescimo_j;
    k += acrescimo_k;
  }
  return false;
}

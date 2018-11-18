#include "bispo.h"
#include "tabuleiro.h"

Bispo::Bispo(int x, int y, std::string &cor) : Peca("♝", cor, x, y) {}
Bispo::~Bispo() {}
bool Bispo::pode_mover(int x, int y)
{
  return std::abs(x) == std::abs(y);
}

bool Bispo::tem_peca_na_frente(int x, int y, Tabuleiro *t)
{
  int j = this->_p._x, k = this->_p._y;
  int acrescimo_j = x > j ? 1 : -1;
  int acrescimo_k = y > k ? 1 : -1;

  j += acrescimo_j;
  k += acrescimo_k;

  while (j != x && k != y)
  {
    if (t->tem_peca(j, k))
    {
      return true;
    }
    j += acrescimo_j;
    k += acrescimo_k;
  }
  return t->tem_peca(x, y);
}

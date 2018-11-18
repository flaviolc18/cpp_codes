#include "rainha.h"
#include "tabuleiro.h"

Rainha::Rainha(int x, int y, std::string &cor) : Peca("♛", cor, x, y) {}
Rainha::~Rainha() {}

bool Rainha::pode_mover(int x, int y)
{
  return ((std::abs(x) == std::abs(y) || (x == 0 || y == 0)));
}

bool Rainha::tem_peca_na_frente(int x, int y, Tabuleiro *t)
{
  int j = this->_p._x, k = this->_p._y, acrescimo_j, acrescimo_k;

  if (x == this->_p._x)
  {
    acrescimo_j = 0;
  }
  else if (x > this->_p._x)
  {
    acrescimo_j = 1;
  }
  else
  {
    acrescimo_j = -1;
  }

  if (y == this->_p._y)
  {
    acrescimo_k = 0;
  }
  else if (y > this->_p._y)
  {
    acrescimo_k = 1;
  }
  else
  {
    acrescimo_k = -1;
  }

  j += acrescimo_j;
  k += acrescimo_k;

  while (j != x || k != y)
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
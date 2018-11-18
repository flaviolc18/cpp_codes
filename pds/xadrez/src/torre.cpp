#include "torre.h"
#include "tabuleiro.h"

Torre::Torre(int x, int y, std::string &cor) : Peca("♜", cor, x, y) {}
Torre::~Torre() {}

bool Torre::pode_mover(int x, int y, Tabuleiro *t)
{
  return (x == 0 || y == 0) && this->valida_movimento(x, y, t);
}

bool Torre::tem_peca_na_frente(int x, int y, Tabuleiro *t)
{
  int j = this->_p._x, k = this->_p._y, acrescimo_j, acrescimo_k;

  if (this->_p._x == x)
  {
    //movimento no eixo y
    acrescimo_j = 0;
    acrescimo_k = y > this->_p._y ? 1 : -1;
  }
  else
  {
    //movimento no eixo x
    acrescimo_k = 0;
    acrescimo_j = x > this->_p._x ? 1 : -1;
  }

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
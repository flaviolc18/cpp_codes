#include "peao.h"
#include "tabuleiro.h"

Peao::Peao(int x, int y, std::string &cor, bool ehPositivo) : Peca("♟", cor, x, y), _positivo(ehPositivo) {}
Peao::~Peao() {}

bool Peao::pode_mover(int x, int y)
{
  if (this->_positivo)
  {
    return x == 0 && y == 1;
  }
  return x == 0 && y == -1;
}
bool Peao::tem_peca_na_frente(int x, int y, Tabuleiro *t)
{
  return t->tem_peca(x, y);
}
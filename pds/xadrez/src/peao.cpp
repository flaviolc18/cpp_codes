#include "peao.h"
#include "tabuleiro.h"

Peao::Peao(int x, int y, std::string &cor, bool ehPositivo) : Peca("♟", cor, x, y), _positivo(ehPositivo) {}
Peao::~Peao() {}

bool Peao::pode_mover(int x, int y, Tabuleiro *t)
{
  if (this->_positivo)
  {
    return this->get_x() == x && y == 1 && this->valida_movimento(x, y, t);
  }
  return this->get_x() == x && y == -1 && this->valida_movimento(x, y, t);
}
bool Peao::tem_peca_na_frente(int x, int y, Tabuleiro *t)
{
  if (t->tem_peca(x, y))
  {
    return true;
  }
  return false;
}
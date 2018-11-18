#include "cavalo.h"

Cavalo::Cavalo(int x, int y, std::string &cor) : Peca("♞", cor, x, y) {}
Cavalo::~Cavalo() {}

bool Cavalo::pode_mover(int x, int y, Tabuleiro *t)
{

  return (std::abs(x) < 3 && std::abs(y) < 3) && (x + y == 3) && this->valida_movimento(x, y, t);
}

bool Cavalo::tem_peca_na_frente(int x, int y, Tabuleiro *t)
{
  return false;
}
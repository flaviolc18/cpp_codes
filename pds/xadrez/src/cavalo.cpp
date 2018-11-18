#include "cavalo.h"
#include "tabuleiro.h"

Cavalo::Cavalo(int x, int y, std::string &cor) : Peca("♞", cor, x, y) {}
Cavalo::~Cavalo() {}

bool Cavalo::pode_mover(int x, int y)
{

  return (std::abs(x) < 3 && std::abs(y) < 3) && (std::abs(x) + std::abs(y) == 3);
}

bool Cavalo::tem_peca_na_frente(int x, int y, Tabuleiro *t)
{
  return t->tem_peca(x, y);
}
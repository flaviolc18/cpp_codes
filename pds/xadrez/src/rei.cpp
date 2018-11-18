#include "rei.h"
#include "tabuleiro.h"

Rei::Rei(int x, int y, std::string &cor) : Peca("♔", cor, x, y) {}
Rei::~Rei() {}

bool Rei::pode_mover(int x, int y, Tabuleiro *t)
{
  return std::abs(x) < 2 && std::abs(y) < 2 && this->valida_movimento(x, y, t);
}

bool Rei::tem_peca_na_frente(int x, int y, Tabuleiro *t)
{
  return t->tem_peca(x, y);
}
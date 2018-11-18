#ifndef BISPO_H
#define BISPO_H

#include "peca.h"

class Bispo : public Peca
{

public:
  Bispo(int x, int y, std::string &cor);
  virtual ~Bispo();
  virtual bool pode_mover(int x, int y, Tabuleiro *t);
  virtual bool tem_peca_na_frente(int x, int y, Tabuleiro *t);
};

#endif
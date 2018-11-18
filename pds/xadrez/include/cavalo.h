#ifndef CAVALO_H
#define CAVALO_H

#include "peca.h"

class Cavalo : public Peca
{

public:
  Cavalo(int x, int y, std::string &cor);
  virtual ~Cavalo();
  virtual bool pode_mover(int x, int y, Tabuleiro *t);
  virtual bool tem_peca_na_frente(int x, int y, Tabuleiro *t);
};

#endif
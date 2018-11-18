#ifndef RAINHA_H
#define RAINHA_H

#include "peca.h"

class Rainha : public Peca
{

public:
  Rainha(int x, int y, std::string &cor);
  virtual ~Rainha();
  virtual bool pode_mover(int x, int y);
  virtual bool tem_peca_na_frente(int x, int y, Tabuleiro *t);
};

#endif
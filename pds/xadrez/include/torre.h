#ifndef TORRE_H
#define TORRE_H

#include "peca.h"

class Torre : public Peca
{

public:
  Torre(int x, int y, std::string &cor);
  virtual ~Torre();
  virtual bool pode_mover(int x, int y, Tabuleiro *t);
  virtual bool tem_peca_na_frente(int x, int y, Tabuleiro *t);
};

#endif
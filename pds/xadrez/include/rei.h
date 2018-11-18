#ifndef REI_H
#define REI_H

#include "peca.h"

class Rei : public Peca
{

public:
  Rei(int x, int y, std::string &cor);
  virtual ~Rei();
  virtual bool pode_mover(int x, int y);
  virtual bool tem_peca_na_frente(int x, int y, Tabuleiro *t);
};

#endif
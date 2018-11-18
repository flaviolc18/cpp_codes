#ifndef PEAO_H
#define PEAO_H

#include "peca.h"

class Tabuleiro;

class Peao : public Peca
{

  bool _positivo;

public:
  Peao(int x, int y, std::string &cor, bool ehPositivo);
  virtual ~Peao();
  virtual bool pode_mover(int x, int y);
  virtual bool tem_peca_na_frente(int x, int y, Tabuleiro *t);
};

#endif
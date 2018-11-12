#ifndef BISPO_H
#define BISPO_H

#include "peca.h"

class Bispo : public Peca{

  public:
    Bispo(int x, int y);
    virtual bool pode_mover(int x, int y, Tabuleiro *t);
};

#endif
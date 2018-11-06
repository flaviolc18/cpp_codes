#ifndef CAVALO_H
#define CAVALO_H

#include "peca.h"

class Cavalo : public Peca{

  public:
    Cavalo(int x, int y);
    virtual bool pode_mover(int x, int y);
};

#endif
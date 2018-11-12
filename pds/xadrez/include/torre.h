#ifndef TORRE_H
#define TORRE_H

class Peca;
class Tabuleiro;

class Torre : public Peca{

  public:
    Torre(int x, int y, Tabuleiro* t);
    virtual bool pode_mover(int x, int y);
};

#endif
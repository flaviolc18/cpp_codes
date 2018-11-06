#ifndef PECA_H
#define PECA_H

#include <iostream>
#include <cstdlib>

#include "excecoes.h"
#include "posicao.h"
#include "tabuleiro.h"

class Peca{
  protected:
    std::string _nome;
    Posicao _p;
    Tabuleiro _tabuleiro;
  
  public:
    Peca(std::string nome, int x, int y);
    void mover(int x, int y);
    bool valida_movimento(int x, int y);
    int get_x();
    int get_y();
    std::string get_nome();
    std::string get_posicao();

    virtual bool pode_mover(int x, int y) = 0;
};

#endif

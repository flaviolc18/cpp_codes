#ifndef TABULEIRO_H
#define TABULEIRO_H

#include <map>
#include <vector>

#include "posicao.h"
#include "peca.h"
#include "peao.h"
#include "bispo.h"
#include "cavalo.h"
#include "torre.h"
#include "rainha.h"
#include "rei.h"

class Tabuleiro {
  
  std::map<std::string, std::map<Posicao, Peca*>> _pecas;

  public:
    Tabuleiro();
    ~Tabuleiro();
    bool pode_mover(Posicao& p);
};

#endif
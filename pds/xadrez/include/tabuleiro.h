#ifndef TABULEIRO_H
#define TABULEIRO_H

#include <map>
#include <vector>

#include "posicao.h"

const std::string BRANCAS = "brancas";
const std::string NEGRAS = "negras";

class Peca;

struct comparator
{
  bool operator()(const Posicao &a, const Posicao &b) const
  {
    if (a._x == b._x && a._y == b._y)
    {
      return false;
    }
    return true;
  }
};

class Tabuleiro
{

  std::map<Posicao, Peca *> *_pecas;

public:
  Tabuleiro();
  ~Tabuleiro();
  bool esta_no_tabuleiro(Posicao &p);
  void inicializa_pecas(std::string &cor);
  void delete_pecas();
  Peca *get_peca(Posicao &pos);
  void printa_tabuleiro();
  bool tem_peca(int x, int y);
  void move_peca(Posicao &pos, int x, int y);
};
#endif
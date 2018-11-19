#ifndef TABULEIRO_H
#define TABULEIRO_H

#include <map>
#include <vector>

#include "posicao.h"

const std::string BRANCAS = "brancas";
const std::string NEGRAS = "negras";

class Peca;

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
#include "doctest.h"

#include "peca.h"
#include "peao.h"
#include "bispo.h"
#include "cavalo.h"
#include "torre.h"
#include "rainha.h"

TEST_CASE("Testa construtores"){
  Tabuleiro *t = new Tabuleiro();
  Peao p1(1, 0, t);
  Torre t1(0, 0, t);
  Cavalo c1(1, 0, t);
  Bispo b1(2, 0, t);
  Rainha r1(3, 0, t);
  Rei r2(4, 0, t);
}
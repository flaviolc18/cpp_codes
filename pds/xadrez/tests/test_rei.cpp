#include "doctest.h"

#include "peca.h"
#include "tabuleiro.h"

TEST_CASE("Testa Metodos Rei")
{
  std::string brancas = BRANCAS;
  std::string negras = NEGRAS;

  Tabuleiro t = Tabuleiro();

  Posicao pos = Posicao(4, 0);
  Peca *p = t.get_peca(pos);
  CHECK_EQ(p->get_nome(), "♔");
  CHECK_EQ(p->get_cor(), negras);

  //peca na frente
  CHECK_THROWS(t.move_peca(pos, 0, 1));

  //fora do tabuleiro
  CHECK_THROWS(t.move_peca(pos, 0, -1));

  //movimento invalido
  CHECK_THROWS(t.move_peca(pos, 1, 3));

  //movimento valido
  Posicao pos2 = Posicao(4, 1);
  t.move_peca(pos2, 0, 1);

  CHECK_NOTHROW(t.move_peca(pos, 0, 1));

  Posicao pos4 = Posicao(4, 1);
  CHECK_NOTHROW(t.move_peca(pos4, -1, 1));

  Posicao pos5 = Posicao(3, 2);
  CHECK_NOTHROW(t.move_peca(pos5, 1, 1));

  Posicao pos6 = Posicao(4, 3);
  CHECK_NOTHROW(t.move_peca(pos6, 1, 0));

  Posicao pos7 = Posicao(5, 3);
  CHECK_NOTHROW(t.move_peca(pos7, 0, -1));
}
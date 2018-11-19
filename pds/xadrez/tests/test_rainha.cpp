#include "doctest.h"

#include "peca.h"
#include "tabuleiro.h"

TEST_CASE("Testa Metodos Rainha")
{
  std::string brancas = BRANCAS;
  std::string negras = NEGRAS;

  Tabuleiro t = Tabuleiro();

  Posicao pos = Posicao(3, 0);
  Peca *p = t.get_peca(pos);
  CHECK_EQ(p->get_nome(), "♛");
  CHECK_EQ(p->get_cor(), negras);

  //peca na frente
  CHECK_THROWS(t.move_peca(pos, 0, 3));

  //fora do tabuleiro
  CHECK_THROWS(t.move_peca(pos, 0, -1));

  //movimento invalido
  CHECK_THROWS(t.move_peca(pos, 1, 3));

  //movimento valido
  Posicao pos2 = Posicao(3, 1);
  t.move_peca(pos2, 0, 1);

  Posicao pos3 = Posicao(3, 2);
  t.move_peca(pos3, 0, 1);

  CHECK_NOTHROW(t.move_peca(pos, 0, 2));

  Posicao pos4 = Posicao(3, 2);
  CHECK_NOTHROW(t.move_peca(pos4, -3, 0));

  Posicao pos5 = Posicao(0, 2);
  CHECK_NOTHROW(t.move_peca(pos5, 2, 2));

  Posicao pos6 = Posicao(2, 4);
  CHECK_NOTHROW(t.move_peca(pos6, 2, 0));

  Posicao pos7 = Posicao(4, 4);
  CHECK_NOTHROW(t.move_peca(pos7, 0, -2));

  Posicao pos8 = Posicao(4, 2);
  CHECK_THROWS(t.move_peca(pos8, -1, 1));
}

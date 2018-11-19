#include "doctest.h"

#include "peca.h"
#include "tabuleiro.h"

TEST_CASE("Testa Metodos Torre")
{
  std::string brancas = BRANCAS;
  std::string negras = NEGRAS;

  Tabuleiro t = Tabuleiro();

  Posicao pos = Posicao(0, 0);
  Peca *p = t.get_peca(pos);
  CHECK_EQ(p->get_nome(), "♜");
  CHECK_EQ(p->get_cor(), negras);

  //peca na frente
  CHECK_THROWS(t.move_peca(pos, 0, 3));

  //fora do tabuleiro
  CHECK_THROWS(t.move_peca(pos, 0, -1));

  //movimento invalido
  CHECK_THROWS(t.move_peca(pos, 2, 3));

  //movimento valido
  Posicao pos2 = Posicao(0, 1);
  t.move_peca(pos2, 0, 1);

  Posicao pos3 = Posicao(0, 2);
  t.move_peca(pos3, 0, 1);

  CHECK_NOTHROW(t.move_peca(pos, 0, 2));

  Posicao pos4 = Posicao(0, 2);
  CHECK_NOTHROW(t.move_peca(pos4, 5, 0));
}
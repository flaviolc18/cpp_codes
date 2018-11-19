#include "doctest.h"

#include "peca.h"
#include "tabuleiro.h"

TEST_CASE("Testa Metodos Peoes")
{
  std::string brancas = BRANCAS;
  std::string negras = NEGRAS;

  Tabuleiro t = Tabuleiro();

  //testa peao branco
  Posicao pos = Posicao(0, 6);
  Peca *p = t.get_peca(pos);
  CHECK_EQ(p->get_nome(), "♟");
  CHECK_EQ(p->get_cor(), brancas);

  //movimento invalido
  CHECK_THROWS(t.move_peca(pos, 1, 1));

  //movimento valido
  CHECK_NOTHROW(t.move_peca(pos, 0, -1));

  //testa com um peao negro
  Posicao pos3 = Posicao(0, 1);

  //movimento invalido
  CHECK_THROWS(t.move_peca(pos3, 1, -1));

  //movimento valido
  CHECK_NOTHROW(t.move_peca(pos3, 0, 1));
}
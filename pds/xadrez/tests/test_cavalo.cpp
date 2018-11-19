#include "doctest.h"

#include "peca.h"
#include "tabuleiro.h"

TEST_CASE("Testa Metodos Cavalo")
{
  std::string brancas = BRANCAS;
  std::string negras = NEGRAS;

  Tabuleiro t = Tabuleiro();

  Posicao pos = Posicao(1, 0);
  Peca *p = t.get_peca(pos);
  CHECK_EQ(p->get_nome(), "♞");
  CHECK_EQ(p->get_cor(), negras);

  //fora do tabuleiro
  CHECK_THROWS(t.move_peca(pos, -1, -2));
  //movimento invalido
  CHECK_THROWS(t.move_peca(pos, 2, 2));

  //movimento valido
  CHECK_NOTHROW(t.move_peca(pos, 1, 2));
}
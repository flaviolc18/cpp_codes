#include "doctest.h"

#include "peca.h"
#include "tabuleiro.h"

TEST_CASE("Testa Metodos Bispo")
{
  std::string brancas = BRANCAS;
  std::string negras = NEGRAS;

  Tabuleiro t = Tabuleiro();

  Posicao pos = Posicao(2, 0);
  Peca *p = t.get_peca(pos);
  CHECK_EQ(p->get_nome(), "♝");
  CHECK_EQ(p->get_cor(), negras);

  //peca na frente
  try
  {
    t.move_peca(pos, 3, 3);
  }
  catch (std::exception &e)
  {
    CHECK(std::string(e.what()) == "Peca na Frente");
  }

  //fora do tabuleiro
  try
  {
    t.move_peca(pos, 1, -1);
  }
  catch (std::exception &e)
  {
    CHECK(std::string(e.what()) == "Fora do Tabuleiro");
  }

  //movimento invalido
  try
  {
    t.move_peca(pos, 2, 3);
  }
  catch (std::exception &e)
  {
    CHECK(std::string(e.what()) == "Movimento Invalido");
  }

  //movimento valido
  Posicao pos2 = Posicao(3, 1);
  t.move_peca(pos2, 0, 1);

  CHECK_NOTHROW(t.move_peca(pos, 2, 2));
}
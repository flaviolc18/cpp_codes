#include "doctest.h"

#include "tabuleiro.h"
#include "peca.h"
#include "peao.h"
#include "bispo.h"
#include "cavalo.h"
#include "torre.h"
#include "rainha.h"
#include "rei.h"

std::string brancas = BRANCAS;
std::string negras = NEGRAS;

TEST_CASE("Testa construtores")
{

  Tabuleiro *t = new Tabuleiro();
  Posicao pos = Posicao(0, 0);
  Peca *p = t->get_peca(pos);
  CHECK_EQ(p->get_x(), 0);
  CHECK_EQ(p->get_y(), 0);
  CHECK_EQ(p->get_posicao(), "(0, 0)");
  delete t;
}

TEST_CASE("Testa funcoes da classe Tabuleiro")
{
  Tabuleiro t = Tabuleiro();

  Posicao pos = Posicao(0, 0);
  CHECK(t.esta_no_tabuleiro(pos));
  Posicao invalid = Posicao(-1, -1);
  CHECK(!t.esta_no_tabuleiro(invalid));

  try
  {
    t.get_peca(invalid);
  }
  catch (std::exception &e)
  {
    CHECK(std::string(e.what()) == "Nao tem peca nessa posicao");
  }
  t.printa_tabuleiro();
}

TEST_CASE("Testa excecoes de construtores")
{
  CHECK_THROWS(Peao p1(8, 8, brancas, false));
  CHECK_THROWS(Torre p1(8, 8, brancas));
  CHECK_THROWS(Cavalo p1(8, 8, brancas));
  CHECK_THROWS(Bispo p1(8, 8, brancas));
  CHECK_THROWS(Rainha p1(8, 8, brancas));
  CHECK_THROWS(Rei p1(8, 8, brancas));
}
